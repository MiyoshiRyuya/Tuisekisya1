//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include "ObjSave1.h"

//使用するネームスペース
using namespace GameL;



//イニシャライズ
void CObjSave1::Init()
{
	m_time = 0;
}

//アクション
void CObjSave1::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>400 && m_mou_y < 450)
	{
		//マウスの左が押されたらセーブ画面1に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneSave2());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>110 && m_mou_y < 150)
	{
		//マウスの左が押されたらセーブ画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainSave());
			m_time++;
		}
	}
}

//ドロー
void CObjSave1::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"セーブ画面", 280, 100, 46, c);

	Font::StrDraw(L"スロット1", 250, 180, 64, c);

	Font::StrDraw(L"セーブしますか？", 150, 320, 64, c);

	Font::StrDraw(L"はい　　　　いいえ", 130, 460, 64, c);

	Font::StrDraw(L"←", 150, 100, 64, c);
}
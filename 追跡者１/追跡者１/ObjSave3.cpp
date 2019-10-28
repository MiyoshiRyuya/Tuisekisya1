//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include"ObjSave3.h"

//使用するネームスペース
using namespace GameL;



//イニシャライズ
void CObjSave3::Init()
{
	m_time = 0;
}

//アクション
void CObjSave3::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>110 && m_mou_y < 150)
	{
		//マウスの左が押されたらセーブスロット1に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneSave1());
			m_time++;
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>110 && m_mou_y < 150)
	{
		//マウスの左が押されたらセーブスロット2に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainSave());
			m_time++;
		}
	}
}

//ドロー
void CObjSave3::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	Font::StrDraw(L"セーブ画面", 280, 100, 46, c);

	Font::StrDraw(L"スロット3", 250, 180, 64, c);

	Font::StrDraw(L"セーブしますか？", 150, 320, 64, c);

	Font::StrDraw(L"はい　　　　いいえ", 130, 460, 64, c);

	Font::StrDraw(L"←", 150, 100, 64, c);
}
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include"ObjSave3.h"

//使用するネームスペース
using namespace GameL;



//イニシャライズ
void CObjRoad3::Init()
{
	m_time = 0;
}

//アクション
void CObjRoad3::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 520 && m_mou_x < 680 && m_mou_y>460 && m_mou_y < 510)
	{
		//マウスの左が押されたらロード画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainRoad());
		}
	}
}

//ドロー
void CObjRoad3::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	Font::StrDraw(L"ロード画面", 280, 100, 46, c);

	Font::StrDraw(L"スロット3", 250, 180, 64, c);

	Font::StrDraw(L"プレイ時間表示", 250, 250, 64, c);

	Font::StrDraw(L"ロードしますか？", 150, 320, 64, c);

	Font::StrDraw(L"はい　　　　いいえ", 130, 460, 64, c);
}
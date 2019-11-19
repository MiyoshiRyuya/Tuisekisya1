//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjItem.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjItem::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	m_time = 0;
}

//アクション
void CObjItem::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	m_time++;

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>110 && m_mou_y < 150)
	{
		//マウスの左が押されたらアイテム画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneMenu());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 240 && m_mou_x < 600 && m_mou_y>220 && m_mou_y < 280)
	{
		//マウスの左が押されたら催涙スプレー装備画面に移動する
		if (m_time % 10 == 0 && m_mou_l == true)
		{
			Scene::SetScene(new CSceneEquipped());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 300 && m_mou_x < 480 && m_mou_y>460 && m_mou_y < 510)
	{
		//マウスの左が押されたら十字架装備画面に移動する
		if (m_time % 10 == 0 && m_mou_l == true)
		{
			Scene::SetScene(new CSceneEquipped2());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 190 && m_mou_x < 620 && m_mou_y>340 && m_mou_y < 390)
	{
		//マウスの左が押されたら屋根裏部屋の鍵画面に移動する
		if (m_time %10 == 0 && m_mou_l == true)
		{
			//Scene::SetScene(new CSceneEquipped3());
		}
	}
}



//ドロー
void CObjItem::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	Font::StrDraw(L"アイテム", 300, 100, 46, c);

	Font::StrDraw(L"催涙スプレー", 220, 220, 64, c);

	Font::StrDraw(L"屋根裏部屋の鍵", 190, 340, 64, c);

	Font::StrDraw(L"十字架", 300, 460, 64, c);

	Font::StrDraw(L"←", 150, 100, 64, c);
}
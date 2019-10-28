//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjMenu.h"
#include "ObjItem.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjMenu::Init()
{
	m_mou_x = (float) Input::GetPosX();
	m_mou_y = (float) Input::GetPosY();
}

//アクション
void CObjMenu::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x < 330 && m_mou_x < 340 && m_mou_y>400 && m_mou_y < 430)
	{
		//マウスの左が押されたらアイテム画面に移動する
		if (m_mou_r == true || m_mou_l == true)
		{
			Scene::SetScene(new CSceneMenu());//指南書パズル2-12
		}
	}
}

//ドロー
void CObjMenu::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f};
	//仮マウス位置表示
	wchar_t str[256];
	swprintf_s(str, L"x=%f,Y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	//仮マウスのボタンの状態
	if (m_mou_r == true)
		Font::StrDraw(L"R=押してる", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=押してない", 20, 30, 12, c);

	if (m_mou_l == true)
		Font::StrDraw(L"L=押してる", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=押してない", 20, 40, 12, c);
	
	//メニュー画面表示
	Font::StrDraw(L"MENU", 360, 100, 46, c);
	//アイテム画面表示
	Font::StrDraw(L"アイテム",280, 230, 64, c);
	//セーブ画面表示
	Font::StrDraw(L"セーブ",310, 340, 64, c);
	//タイトルに戻る画面表示
	Font::StrDraw(L"タイトルに戻る", 180, 450, 64, c);
}
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"
#include "SceneMain.h"
#include "SceneTitle.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjMenu.h"
#include "ObjItem.h"
#include "ObjHero.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjMenu::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
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
	
	//Eボタンを押すとゲーム画面に移動する
	if (Input::GetVKey('E') == true)
	{
		Scene::SetScene(new CSceneMain());
	}

	


	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 230 && m_mou_x < 510 && m_mou_y>240 && m_mou_y < 290)
	{
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneItem());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 310 && m_mou_x < 500 && m_mou_y>340 && m_mou_y < 400)
	{
		//マウスの左が押されたらセーブ画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainSave());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 130 && m_mou_x < 640 && m_mou_y>450 && m_mou_y < 510)
	{
		//マウスの左が押されたらタイトル画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneTitle());
		}
	}

}

//ドロー
void CObjMenu::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	//メニュー画面表示
	Font::StrDraw(L"MENU", 360, 100, 46, c);
	//アイテム画面表示
	Font::StrDraw(L"アイテム", 280, 230, 64, c);
	//セーブ画面表示
	Font::StrDraw(L"セーブ", 310, 340, 64, c);
	//タイトルに戻る画面表示
	Font::StrDraw(L"タイトルに戻る", 180, 450, 64, c);
}
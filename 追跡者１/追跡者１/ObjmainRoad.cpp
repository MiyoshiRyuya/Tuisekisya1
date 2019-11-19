//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\DrawTexture.h"

#include "ObjTitle.h"
#include "ObjmainRoad.h"
#include "SceneTitle.h"
#include "SceneRoad1.h"
#include "SceneRoad2.h"
#include "SceneRoad3.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjmainRoad::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	m_time = 0;
}

//アクション
void CObjmainRoad::Action()
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
		//マウスの左が押されたらメニュ画面に移動する
		if (m_time % 8 == 0 && m_mou_l == true)
		{
			Scene::SetScene(new CSceneTitle());
		}
	}


	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>190 && m_mou_y < 230)
	{
		//マウスの左が押されたらセーブスロット1に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneRoad1());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>300 && m_mou_y < 350)
	{
		//マウスの左が押されたらセーブスロット2に移動する
		if (m_time % 10 == 0 && m_mou_l == true)
		{
			Scene::SetScene(new CSceneRoad2());
		}
	}

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>400 && m_mou_y < 460)
	{
		//マウスの左が押されたらセーブスロット3に移動する
		if (m_time % 10 == 0 && m_mou_l == true)
		{
			Scene::SetScene(new CSceneRoad3());
		}
	}
}

//ドロー
void CObjmainRoad::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	Font::StrDraw(L"ロード画面", 280, 100, 46, c);

	Font::StrDraw(L"スロット1", 250, 180, 64, c);

	Font::StrDraw(L"スロット2", 250, 290, 64, c);

	Font::StrDraw(L"スロット3", 250, 400, 64, c);

	Font::StrDraw(L"←", 150, 100, 64, c);
}
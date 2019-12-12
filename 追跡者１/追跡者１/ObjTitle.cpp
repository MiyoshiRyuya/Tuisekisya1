#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\DrawFont.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTitle.h"
#include"SceneMain.h"

using namespace GameL;

//イニシャライズ
void CObjTitle::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
}

//アクション
void CObjTitle::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウス左クリックを押したらシーンメインに移行する
	if (m_mou_x > 356 && m_mou_x < 445 && m_mou_y>345 && m_mou_y < 364)
	{
		
		//マウスが押されたらシーンメインに移動
		if (m_mou_l == true)
		{
			Audio::Start(1);
			Scene::SetScene(new CSceneMap5());
		}
	}

	/*/マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 355 && m_mou_x < 445 && m_mou_y>400 && m_mou_y < 420)
	{
		//マウスの左が押されたらロード画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainRoad());
		}
	}*/
}

//ドロー
void CObjTitle::Draw()
{
	float c[4] = { 1,1,1,1 };



	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 209.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);

	//外部グラフィックファイルを読み込み0番目に登録(512*209)
	Draw::LoadImage(L"Title.png", 0, TEX_SIZE_512);


	Font::StrDraw(L"GAME START", 360, 350, 23, c);
	//Font::StrDraw(L"CONTINUE", 360, 410, 23, c);
}

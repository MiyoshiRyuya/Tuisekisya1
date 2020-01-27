//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawTexture.h"
#include "GameL\Audio.h"

#include "GameHead.h"
#include "ObjGameOver.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjGameOver::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
	flag = false;
}

//アクション
void CObjGameOver::Action()
{

	if (Input::GetVKey(VK_RETURN) == true)
	{
		flag = true;
	}
	if (flag == true)
	{
		if (Input::GetVKey(VK_RETURN) == false)
		{
			Audio::Start(0);
			Scene::SetScene(new CSceneTitle());
		}
	}
	
}

//ドロー
void CObjGameOver::Draw()
{
	float c[4] = { 1,1,1,1 };



	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 230.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);

	//外部グラフィックファイルを読み込み0番目に登録(512*230)
	Draw::LoadImage(L"GameOverScene.png", 0, TEX_SIZE_512);

	Font::StrDraw(L"Press Enter", 360, 410, 24, c);
}

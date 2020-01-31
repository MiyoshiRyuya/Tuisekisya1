#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\DrawFont.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTitle.h"
#include"SceneMain.h"

using namespace GameL; 

extern bool Memoflag1;
extern bool Memoflag2;
extern bool Memo3flag;
extern bool Tipsflag;
extern bool itemflag;
extern bool Textflag1;
extern bool Textflag2;
extern bool Textflag3;
extern bool Textflag4;
extern bool Textflag5;
extern bool Textflag6;
extern bool Textflag7;


//イニシャライズ
void CObjTitle::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
	Migi4 = 1;
} 
//アクション
void CObjTitle::Action()
{
	Memoflag1 = false;
	Memoflag2 = false;
	Memo3flag = false;
	Tipsflag = false;
	itemflag = false;
	Textflag1 = false;
	Textflag2 = false;
	Textflag3 = false;
	Textflag4 = false;
	Textflag5 = false;
	Textflag6 = false;
	Textflag7 = false;

	
		//エンターキーが押されたらシーンメインに移動
	if (Migi4 == 1)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			Migi4 = 1;
			Audio::Start(1);
			Scene::SetScene(new CSceneMap5());
		}
	}

	if (Migi4 == 2)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			Migi4 = 2;
			Audio::Start(1);
			Scene::SetScene(new CSceneDesc());
		}
	}

	if (Input::GetVKey(VK_UP) == true) {
		Migi4 = 1;
		time = 0;
	}
	else if (Input::GetVKey(VK_DOWN) == true) {
		Migi4 = 2;
		time = 0;
	}
}

//ドロー
void CObjTitle::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"ゲームスタート", 340, 350, 28, c);
	Font::StrDraw(L"操作説明", 340, 400, 23, c);

	if (Migi4 == 1) {
		Font::StrDraw(L"→", 300, 350, 32, c);
	}
	else if (Migi4 == 2) {
		Font::StrDraw(L"→", 300, 400, 32, c);
	}

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

	Font::StrDraw(L"GAME START", 340, 350, 23, c);
	Font::StrDraw(L"操作説明", 340, 380, 32, c);

	if (Migi4 == 1) {
		Font::StrDraw(L"→", 300, 350, 32, c);
	}
	else if (Migi4 == 2) {
		Font::StrDraw(L"→", 300, 380, 32, c);
	}
}

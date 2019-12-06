//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjMenu2.h"


//使用するネームスペース
using namespace GameL;

extern float genzaiti; //現在地

//イニシャライズ
void CObjMenu2::Init()
{
	Cross = 0;
	Item = 0;
	Migi = 1; //初期画面
	Migi2 = 1; //game終了画面
	GameOver = 0;

	time = 0; // 時間測る君
}

//アクション
void CObjMenu2::Action()
{

	time++;
	
	//メニュー内の処理（複雑？）
	if (time>=10)
	{
		if (GameOver == 0) {
			if (Migi == 1) {
				if (Input::GetVKey('W') == true) {
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Migi = 2;
					time = 0;
				}
			}
			else if (Migi == 2) {
				if (Input::GetVKey('W') == true) {
					Migi = 1;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					if (genzaiti == 1)
						Scene::SetScene(new CSceneMain());
					else if (genzaiti == 2)
						Scene::SetScene(new CSceneMap2());
					else if (genzaiti == 3)
						Scene::SetScene(new CSceneMap3());
					else if (genzaiti == 4)
						Scene::SetScene(new CSceneMap4());
					else if (genzaiti == 5)
						Scene::SetScene(new CSceneMap5());
					else if (genzaiti == 6)
						Scene::SetScene(new CSceneMap6());
				}
			}
			else if (Migi == 3) {
				if (Input::GetVKey('W') == true) {
					Migi = 2;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Migi = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					GameOver = 1;
					time = 0;
				}
			}
		}
		else if (GameOver == 1) {
			if (Migi2 == 1) {
				if (Input::GetVKey('A') == true) {
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey('D') == true) {
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					GameOver = 0;
					Scene::SetScene(new CSceneTitle());
				}
			}
			else if (Migi2 == 2) {
				if (Input::GetVKey('A') == true) {
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey('D') == true) {
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					GameOver = 0;
					Migi2 = 1;
					time = 0;
				}
			}
		}
	}
}

//ドロー
void CObjMenu2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	//メニュー画面表示
	Font::StrDraw(L"MENU", 0, 0, 64, c);

	//最初の画面
	if (GameOver == 0) {
		Font::StrDraw(L"所持アイテム確認", 260, 140, 32, c);
		Font::StrDraw(L"ゲーム画面に戻る", 260, 240, 32, c);
		Font::StrDraw(L"ゲームを終了する", 260, 340, 32, c);
	}

	//ゲーム終了の最終確認
	if (GameOver == 1) {
		Font::StrDraw(L"本当に終了しますか？", 240, 140, 32, c);
		Font::StrDraw(L"(現在の進行内容は保存されません)", 140, 180, 32, c);
		Font::StrDraw(L"はい", 250, 320, 32, c);
		Font::StrDraw(L"いいえ", 450, 320, 32, c);
	}

	//カーソル（⇒）
	if (GameOver == 0) {
		if (Migi == 1)
		{
			Font::StrDraw(L"→", 220, 140, 32, c);
		}
		else if (Migi == 2) {
			Font::StrDraw(L"→", 220, 240, 32, c);
		}
		else if (Migi == 3) {
			Font::StrDraw(L"→", 220, 340, 32, c);
		}
	}

	if (GameOver == 1) {
		if (Migi2 == 1)
		{
			Font::StrDraw(L"→", 210, 320, 32, c);
		}
		else if (Migi2 == 2) {
			Font::StrDraw(L"→", 410, 320, 32, c);
		}
	}

	//Menu画面
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 800.0f;
	src.m_bottom = 600.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"
#include "GameL\Audio.h"

#include "GameHead.h"
#include "ObjMenu2.h"


//使用するネームスペース
using namespace GameL;

extern float genzaiti; //現在地
extern bool itemflag;

//イニシャライズ
void CObjMenu2::Init()
{
	Cross = 0; //十字架説明用
	Item = 0;
	Migi = 1; //初期画面
	Migi2 = 1; //game終了画面
	Migi3 = 1; //Item画面
	Migi4 = 1; //Item選択
	GameOver = 0;
	ItemKN; //アイテム確認
	oto = 0;

	time = 0; // 時間測る君
}

//アクション
void CObjMenu2::Action()
{
	if (oto == 0) {
		Audio::Start(4);
		oto = 1;
	}
	
	time++;
	
	//メニュー内の処理（複雑？）
	if (time>=10)
	{
		if (GameOver == 0) {
			if (Migi == 1) {
				if (Input::GetVKey('W') == true) 
				{
					Audio::Start(2);
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) 
				{
					Audio::Start(2);
					Migi = 2;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					Audio::Start(3);
					GameOver = 2;
					Item = 1;
					time = 0;
				}
			}
			else if (Migi == 2) {
				if (Input::GetVKey('W') == true) 
				{
					Audio::Start(2);
					Migi = 1;
					time = 0;
				}

				else if (Input::GetVKey('S') == true) 
				{
					Audio::Start(2);
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					//Audio::Start(3);
					oto = 0;
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
				if (Input::GetVKey('W') == true) 
				{
					Audio::Start(2);
					Migi = 2;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) 
				{
					Audio::Start(2);
					Migi = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					Audio::Start(3);
					GameOver = 1;
					time = 0;
				}
			}
		}
		else if (GameOver == 1) {
			if (Migi2 == 1) {
				if (Input::GetVKey('A') == true) 
				{
					Audio::Start(2);
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey('D') == true)
				{
					Audio::Start(2);
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					//Audio::Start(3);
					GameOver = 0;
					Scene::SetScene(new CSceneTitle());
				}
			}
			else if (Migi2 == 2) {
				if (Input::GetVKey('A') == true) 
				{
					Audio::Start(2);
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey('D') == true) 
				{
					Audio::Start(2);
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					Audio::Start(1);
					GameOver = 0;
					Migi2 = 1;
					time = 0;
				}
			}
		}
		else if (Item == 1) {
			if (Migi4 == 1)
			{
				if (itemflag == true) {
					if (Input::GetVKey('W') == true) {
						Audio::Start(2);
						Migi4 = 2;
						time = 0;
					}
					else if (Input::GetVKey('S') == true) {
						Audio::Start(2);
						Migi4 = 2;
						time = 0;
					}
				}
				if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(1);
					Item = 0;
					GameOver = 0;
					time = 0;
				}
			}
			else if (Migi4 == 2)
			{
				if (Input::GetVKey('W') == true) {
					Audio::Start(2);
					Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Audio::Start(2);
					Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(3);
					Item = 0;
					//GameOver = 0;
					Cross = 1;
					time = 0;
				}
			}
		}
		else if (Cross == 1) {
			if (Input::GetVKey(VK_RETURN) == true) {
				Audio::Start(1);
				Item = 1;
				//GameOver = 0;
				Cross = 0;
				time = 0;
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
	else if (GameOver == 1) {
		Font::StrDraw(L"本当に終了しますか？", 240, 140, 32, c);
		Font::StrDraw(L"(現在の進行内容は保存されません)", 140, 180, 32, c);
		Font::StrDraw(L"はい", 250, 320, 32, c);
		Font::StrDraw(L"いいえ", 450, 320, 32, c);
	}

	else if (Item == 1) {
		if (itemflag == false) {
			Font::StrDraw(L"所持アイテムがありません", 220, 200, 32, c);
		}
		else if (itemflag == true) {
			Font::StrDraw(L"十字架", 340, 200, 32, c);
		}
		Font::StrDraw(L"戻る", 360, 380, 32, c);
	}

	else if (Cross == 1) {
		Font::StrDraw(L"ランボルギーニでタピオカ回すSEIKIN", 140, 200, 32, c);
		Font::StrDraw(L"戻る", 360, 380, 32, c);
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

	if (Item == 1) {
		if (Migi4 == 1) {
			Font::StrDraw(L"→", 320, 380, 32, c);
		}
		else if (Migi4 == 2) {
			Font::StrDraw(L"→", 300, 200, 32, c);
		}
	}

	if (Cross == 1) {
		Font::StrDraw(L"→", 320, 380, 32, c);
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
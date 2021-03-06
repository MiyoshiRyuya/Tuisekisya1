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

bool idou = false; //ゲーム終了時に初期値に戻す用

extern float genzaiti; //現在地
extern bool itemflag;
extern bool Memo3flag;
extern bool Memoflag1;
extern bool Memoflag2;

extern float g_Xz;
extern float g_Yz;

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
	flag = false;
	time = 0; // 時間測る君
}

//アクション
void CObjMenu2::Action()
{
	if (flag == true)
	{
		if (Input::GetVKey(VK_RETURN) == false)
		{
			g_Xz = 100;
			g_Yz = 120;
			Scene::SetScene(new CSceneTitle());
		}
	}

	if (oto == 0) {
		Audio::Start(4);
		oto = 1;
	}

	time++;

	//メニュー内の処理（複雑？）
	if (time >= 10)
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
					
					flag = true;
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
		else if (Item == 1 && Cross == 0) {
			if (Migi4 == 1)
			{
				if (Memoflag1 == true) {
					if (Input::GetVKey('S') == true) {
						Audio::Start(2);
						Migi4 = 2;
						time = 0;
					}
					else if (Input::GetVKey('W') == true) {
						Audio::Start(2);
						if (itemflag == true)
							Migi4 = 5;
						else if (Memo3flag == true)
							Migi4 = 4;
						else if (Memoflag2 == true)
							Migi4 = 3;
						else
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
					if (Memoflag2 == true)
						Migi4 = 3;
					else
						Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(3);
				
					Cross = 2;
					time = 0;
				}
			}
			else if (Migi4 == 3)
			{
				if (Input::GetVKey('W') == true) {
					Audio::Start(2);
					Migi4 = 2;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Audio::Start(2);
					if (Memo3flag == true)
						Migi4 = 4;
					else
						Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(3);
					
					Cross = 3;
					time = 0;
				}
			}
			else if (Migi4 == 4)
			{
				if (Input::GetVKey('W') == true) {
					Audio::Start(2);
					Migi4 = 3;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Audio::Start(2);
					if (itemflag == true)
						Migi4 = 5;
					else
						Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(3);
			
					Cross = 4;
					time = 0;
				}
			}
			else if (Migi4 == 5)
			{
				if (Input::GetVKey('W') == true) {
					Audio::Start(2);
					Migi4 = 4;
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
					
					Cross = 1;
					time = 0;
				}
			}
		}
		else if (Cross != 0) {
			if (Input::GetVKey(VK_RETURN) == true) {
				Audio::Start(1);
				
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



	//最初の画面
	if (GameOver == 0) {
		Font::StrDraw(L"所持品確認", 260, 140, 32, c);
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

	else if (Item == 1&&Cross==0) {
		if (itemflag == false && Memo3flag == false&&Memoflag1==false&&Memoflag2==false) {
			Font::StrDraw(L"所持品はありません", 220, 200, 32, c);
		}
		else {
			if (Memoflag1==true)
			{
				Font::StrDraw(L"メモ1", 340, 150, 32, c);
			}
		    if (Memoflag2 == true ) 
			{
				Font::StrDraw(L"メモ2", 340, 200, 32, c);
			}
			if (Memo3flag == true)
			{
				Font::StrDraw(L"メモ3", 340, 250, 32, c);
			}
			if (itemflag == true)
			{
				Font::StrDraw(L"十字架", 340, 300, 32, c);
			}
		}
			Font::StrDraw(L"戻る", 360, 380, 32, c);
		
	}

	else if (Cross == 1) {
		Font::StrDraw(L"You'll be left as long as you have this", 140, 200, 32, c);
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
	
	if (Item == 1&&Cross==0) {
		if (Migi4 == 1) {
			Font::StrDraw(L"→", 320, 380, 32, c);
		}
		else if (Migi4 == 2) {
			Font::StrDraw(L"→", 300, 150, 32, c);
		}
		else if (Migi4 == 3) {
			Font::StrDraw(L"→", 300, 200, 32, c);
		}
		else if (Migi4 == 4) {
			Font::StrDraw(L"→", 300, 250, 32, c);
		}
		else if (Migi4 == 5) {
			Font::StrDraw(L"→", 300, 300, 32, c);
		}
	}


	//Menu画面
	if (Cross == 0)
	{
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
	if (Cross == 2)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 64.0f;
		src.m_bottom = 64.0f;

		dst.m_top = 0.0f;
		dst.m_left = 100.0f;
		dst.m_right = 700.0f;
		dst.m_bottom = 600.0f;

		Draw::Draw(2, &src, &dst, c, 0.0f);
	}

	if (Cross == 3)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 512.0f;
		src.m_bottom = 512.0f;

		dst.m_top = 0.0f;
		dst.m_left = 100.0f;
		dst.m_right = 700.0f;
		dst.m_bottom = 600.0f;

		Draw::Draw(3, &src, &dst, c, 0.0f);
	}

	if (Cross == 4)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 800.0f;
		src.m_bottom = 600.0f;

		dst.m_top = 0.0f;
		dst.m_left = 0.0f;
		dst.m_right = 800.0f;
		dst.m_bottom = 600.0f;

		Draw::Draw(1, &src, &dst, c, 0.0f);
	}

	//メニュー画面表示
	Font::StrDraw(L"MENU", 0, 0, 64, c);
}
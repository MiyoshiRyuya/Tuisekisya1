﻿
//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\HitBoxManager.h"
#include"GameL\Audio.h"

#include "GameHead.h"
#include "ObjHero.h"
#include "ObjMenu.h"
#include "ObjCloset.h"
#include <Windows.h>


//使用するネームスペース

using namespace GameL;

float g_Xz=100;
float g_Yz=120;

extern bool Memoflag1;
extern bool Memoflag2;
extern bool Memo3flag;
bool Tipsflag = false;
extern bool idou;
bool itemflag = false;
bool solveflag = false;

extern bool Textflag1;
extern bool Textflag2;
extern bool Textflag3;
extern bool Textflag4;
extern bool Textflag5;
extern bool Textflag6;
extern bool Textflag7;

int muki;//1=上下

float CObjHero::Getflag()
{
	 return itemflag; 
}
//イニシャライズ
void CObjHero::Init()
{
	m_px = g_Xz; //移動
	m_py = g_Yz;
	m_vx;//移動ベクトル
	m_vy;
	m_hidari; //左向き
	m_ue; //上
	m_sita = 1; //下
	m_migi; //右
	m_mos_x = 0.0f;
	m_mos_y = 0.0f;
	hitbo = 0; //HitBox確認用

	m_ani_time_max = 4;

	//stageとの衝突確認用
	m_hit_up = false;
	m_hit_down = false;
	m_hit_left = false;
	m_hit_right = false;
	m_ani_time = 0;
	m_ani_frame = 0;

	timeH = 0; //時間測る君２
	
	Hits::SetHitBox(this, m_vx, m_vy, 64, 64, ELEMENT_PLAYER, OBJ_HERO, 1);

}

//アクション
void CObjHero::Action()
{

	//移動ベクトルの破棄
	m_vx = 0.0f;
	m_vy = 0.0f;

	m_x = m_px;
	m_y = m_py;

	//	現在の位置を保存する
	g_Xz = m_x;
	g_Yz = m_y;

	if (idou == true) {
		m_px = 100;
		m_py = 120;
		idou = false;
	}

	//キーの入力方向
	if (Input::GetVKey('D') == true)
	{
		m_migi = 1;
		m_sita = 0;
		m_ue = 0;
		m_hidari = 0;

		m_ani_time += 1;
		m_vx += 2.8f;
	}
	

	if (Input::GetVKey('A') == true)
	{
		m_hidari = 1;
		m_ue = 0;
		m_sita = 0;
		m_migi = 0;

		m_ani_time += 1;
		m_vx -= 2.8f;
	}

	if (Input::GetVKey('W') == true)
	{
		m_ue = 1.0f;
		m_sita = 0;
		m_migi = 0;
		m_hidari = 0;

		m_ani_time += 1;
		m_vy -= 2.8f;
	}
	
	if (Input::GetVKey('S') == true)
	{
		m_sita = 1;
		m_ue = 0;
		m_migi = 0;
		m_hidari = 0;

		m_ani_time += 1;
		m_vy += 2.8f;
	}


	//アニメーション動作--------------------
	if (m_ani_time>=m_ani_time_max)
	{
		m_ani_frame += 1;
		m_ani_time = 0;

	}
	if (m_ani_frame>=4)
	{
		m_ani_frame = 0;
	}


	if (m_vx+32.0f>800.0f)
	{
		m_vx = 800.0f - 32.0f;
	}

	//Mキーを押すとゲーム画面に移動する
	if (Input::GetVKey('M') == true)
	{
		Scene::SetScene(new CSceneMenu2());
	}

	//位置の更新
	m_px += m_vx;
	m_py += m_vy;



	CHitBox*hit = Hits::GetHitBox(this);
	if (hit != nullptr)
	{
		hit->SetPos(m_px, m_py);
	}
	//敵オブジェクトと接触したら主人公削除
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);
		//Hits::DeleteHitBox(this);
		Sleep(1000);
	   itemflag = false;
	   Memo3flag = false;
	   g_Xz = 100;
	   g_Yz = 120;
		//主人公消滅でシーンをゲームオーバー画面に移行する
		Scene::SetScene(new CSceneGameOver());
	}
	//トラップオブジェクトと接触したら主人公削除
	if (hit->CheckObjNameHit(OBJ_TRAP) != nullptr)
	{
		this->SetStatus(false);
		//Hits::DeleteHitBox(this);

		itemflag = false;
		Memo3flag = false;
		g_Xz = 100;
		g_Yz = 120;
		Scene::SetScene(new CSceneGameOver());
	}

	//OBJ_MAP６に接触したら押し返されるプログラム
	if (hit->CheckObjNameHit(OBJ_MAP6) != nullptr)
	{
		if (hitbo == 0) {
			if (Input::GetVKey('W') == true || Input::GetVKey('S') == true) {
				hitbo = 1;
			}
			if (Input::GetVKey('A') == true || Input::GetVKey('D') == true) {
				if (hitbo != 1)
				hitbo = 2;
			}
		}


		if (Input::GetVKey('W') == true && Input::GetVKey('A') == true || Input::GetVKey('W') == true && Input::GetVKey('D') == true || Input::GetVKey('S') == true && Input::GetVKey('A') == true || Input::GetVKey('S') == true && Input::GetVKey('D') == true) {
			m_py = g_Yz;
			m_px = g_Xz;
		}

		//上下の判定
		if (hitbo == 1 && hitbo != 2) {
			if (Input::GetVKey('W') == true) {
				if (Input::GetVKey('S') == false)
					m_py = g_Yz;
			}
			if (Input::GetVKey('S') == true) {
				if (Input::GetVKey('W') == false)
					m_py = g_Yz;
			}
		}

		//左右の判定
		else if (hitbo == 2 && hitbo != 1) {
			if (Input::GetVKey('A') == true) {
				if (Input::GetVKey('D') == false)
					m_px = g_Xz;
			}
			if (Input::GetVKey('D') == true) {
				if (Input::GetVKey('A') == false)
					m_px = g_Xz;
			}
		}

	}
	else {
		hitbo = 0;
		muki = 0;
	}

	//主人公が領域外にいかない様にする処理
	if (m_px + 64.0f > 800.0f) {
		m_px = 800.0f - 64.0f;
	}
	if (m_py + 64.0f > 600.0f) {
		m_py = 600.0f - 64.0f;
	}
	if (m_px < 0.0f) {
		m_px = 0.0f;
	}
	if (m_py < 0.0f) {
		m_py = 0.0f;
	}

	if (hit->CheckObjNameHit(OBJ_CLOSET) != nullptr)
	{

		if (Input::GetVKey(VK_RETURN) == true) {
			Hits::DeleteHitBox(this);

			Audio::Start(4);

			g_Xz = 70;
			g_Yz = 70;
			bool closeton = true;
			Scene::SetScene(new CSceneCloset(closeton));
			return ;
		}

	}

	//Mボタンを押すとメニュー画面に移動する
	if (Input::GetVKey('M') == true)
	{
		CObjMenu2*obj_menu = new CObjMenu2();
		Objs::InsertObj(obj_menu, OBJ_MENU2, 1);
	}

	//謎解き
	
	if (hit->CheckElementHit(ELEMENT_MYS) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true) 
		{
			Tipsflag = true;
			g_Xz = m_x;
			g_Yz = m_y;

			Scene::SetScene(new CScenesolve());
		}
	}
	

	// 強引なマップ移動用HitBox判定プログラム
	if (hit->CheckObjNameHit(OBJ_MOVE1) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true) {
			Hits::DeleteHitBox(this);

			Audio::Start(1);
			g_Xz = 800;
			g_Yz = 310;

			Scene::SetScene(new CSceneMap5()); //Map6→Map5
		}
	}
	//謎解きしないと入れないようにする
	else if (hit->CheckObjNameHit(OBJ_MOVE2) != nullptr)
	{
		if (solveflag= true)
		{
			if (Input::GetVKey(VK_RETURN) == true) {
				Hits::DeleteHitBox(this);

				Audio::Start(1);
				g_Xz = 0;
				g_Yz = 310;

				solveflag = false;

				Scene::SetScene(new CSceneMap6()); //Map5→Map6
			}
		}
	}

	else if (hit->CheckObjNameHit(OBJ_MOVE3) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true) {
			Hits::DeleteHitBox(this);

			Audio::Start(1);
			g_Xz = 380;
			g_Yz = 0;

			Scene::SetScene(new CSceneMap4()); //Map5→Map4
		}
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE6) != nullptr)
	{

			this->SetStatus(false);
			Hits::DeleteHitBox(this);

			Audio::Start(1);
			g_Xz = 363;
			g_Yz = 510;

			Scene::SetScene(new CSceneMap2()); //Map5→Map2
		
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE4) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true) {
			Hits::DeleteHitBox(this);

			Audio::Start(1);
			g_Xz = 0;
			g_Yz = 310;

			Scene::SetScene(new CSceneMap5()); //Map4→Map5
		}
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE7) != nullptr)
	{
			Hits::DeleteHitBox(this);

			Audio::Start(1);
			g_Xz = 370;
			g_Yz = 46;

			Scene::SetScene(new CSceneMap5()); //Map2→Map5
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE8) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true) {
			Hits::DeleteHitBox(this);

			Audio::Start(1);
			g_Xz = 800;
			g_Yz = 260;

			Scene::SetScene(new CSceneMap2()); //Map3→Map2
		}
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE9) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true) {
		Hits::DeleteHitBox(this);

		Audio::Start(1);
		g_Xz = 800;
		g_Yz = 315;

		Scene::SetScene(new CSceneMap3()); //Map2→Map3
		}
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE10) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true) 
		{
		Hits::DeleteHitBox(this);

		Audio::Start(1);
		g_Xz = 800;
		g_Yz = 270;

		Scene::SetScene(new CSceneMain()); //Map2→Map1
		}
	}
	else if (hit->CheckObjNameHit(OBJ_MOVE11) != nullptr)
	{
	if (Input::GetVKey(VK_RETURN) == true)
	 {
		Hits::DeleteHitBox(this);

		Audio::Start(1);
		g_Xz = 0;
		g_Yz = 260;

		Scene::SetScene(new CSceneMap2()); //Map1→Map2
	  }
	}
	
	//ここが反応するとゲームクリア
	else if (hit->CheckObjNameHit(OBJ_ESC) != nullptr)
	{
		if (itemflag == true)
		{

			if (Input::GetVKey(VK_RETURN) == true) {
				Hits::DeleteHitBox(this);

				Audio::Start(1);
				g_Xz = 100;
				g_Yz = 120;

				itemflag = false;

				Scene::SetScene(new CSceneGameClear());
			}

		}
	}
	else if (hit->CheckObjNameHit(OBJ_ITEM) != nullptr)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			if (Memo3flag == true)
			{
				itemflag = true;
			}
		}
	}

	if (Input::GetVKey('P') == true)
	{
		Memoflag1 = true;
		Memoflag2 = true;
		Memo3flag = true;
		Tipsflag  = true;
	}
}

//ドロー
void CObjHero::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	int Ani1[5] =         //上用
	{
		0,2,4,2,0,
	};

	int Ani2[5] =         //右用
	{
		0,2,4,2,4,
	};

	int Ani3[5] =         //左用
	{
		0,2,4,2,0,
	};

	int Ani4[5] =         //下用
	{
		0,2,4,2,0,
	};


	if (m_ue == 1) {
		src.m_top = /*3.0f + */387.0f;
		src.m_left = 61.0f + Ani1[m_ani_frame] * 64;
		src.m_right = 180.0f + Ani1[m_ani_frame] * 64;
		src.m_bottom = 515.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (m_migi == 1) {
		src.m_top = 3.0f + 256.0f;
		src.m_left = 61.0f + Ani2[m_ani_frame] * 64;
		src.m_right = 188.0f + Ani2[m_ani_frame] * 64;
		src.m_bottom = 387.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}
	if (m_hidari == 1) {
		src.m_top = 3.0f + 128.0f;
		src.m_left = 61.0f + Ani3[m_ani_frame] * 64;
		src.m_right = 180.0f + Ani3[m_ani_frame] * 64;
		src.m_bottom = 131.0f + 128.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (m_sita == 1) {
		src.m_top = 3.0f;
		src.m_left = 61.0f + Ani4[m_ani_frame] * 64;
		src.m_right = 188.0f + Ani4[m_ani_frame] * 64;
		src.m_bottom = 131.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}
}
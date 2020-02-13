//ここにマップ名書いてください
//寝室
//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"
#include "SceneMap3.h"
#include "GameHead.h"
#include "Map3.h"
#include "ObjHero.h"
#include "Objtrap.h"
#include "ObjCloset.h"

//使用するネームスペース
using namespace GameL;

extern float genzaiti; //現在地
bool Textflag10 = false;

//イニシャライズ
void CObjMap3::Init()
{
	m_x = 650;
	m_y = 0;
	v_x = -280;
	v_y = -150;
	mx = 300;
	my = 200;
	px = -200;
	py = -150;
	idouX = 750; //マップ移動用
	idouY = 300;

	Hits::SetHitBox(this, m_x -700, m_y + 400, 190, 200, ELEMENT_RED, OBJ_MAP6, 3);//血塗れベッド

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 248, 200, ELEMENT_GREEN, OBJ_MAP6, 3);//ベッド
	
	Hits::SetHitBox(this, mx+10, my+10, 190, 200, ELEMENT_BLUE, OBJ_MAP6, 1);//机とソファ

	Hits::SetHitBox(this, idouX + 10, idouY + 10, 150, 100, ELEMENT_RED, OBJ_MOVE8, 1);//Map3>Map2
}

//アクション
void CObjMap3::Action()
{
	//メニュー画面からゲーム画面に戻った時、勝手に位置が初期化されないようにする
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

	genzaiti = 3;


	CHitBox*hit1 = Hits::GetHitBox(this);
	hit->SetPos(mx+10 , my + 10);

	CHitBox*hit2 = Hits::GetHitBox(this);
	hit->SetPos(idouX + 10, idouY + 10);

	if (Textflag10 == true)
	{
		Sleep(1500);

		Scene::SetScene(new CSceneGameClear);

		this->SetStatus(false);   //自身に削除命令を出す
	}

	if (Input::GetVKey('Z') == true && Input::GetVKey('X') == true && Input::GetVKey('C') == true && Input::GetVKey('V') == true)
	{
		
		Textflag10 = true;
	}
}

//ドロー
void CObjMap3::Draw()
{

	
		//描画カラー情報
		float c[4] = { 1.0f,1.0f,1.0f,1.0f };

		RECT_F src; //描画元切り取り位置
		RECT_F dst; //描画先表示位置

		//切り取り位置の設定
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 600.0f;
		src.m_bottom = 500.0f;

		//表示位置の設定
		dst.m_top = 0.0f;
		dst.m_left = 0.0f;
		dst.m_right = 800.0f;
		dst.m_bottom = 600.0f;

		//描画
		Draw::Draw(2, &src, &dst, c, 0.0f);

		//切り取り位置の設定
		src.m_top = 250.0f;
		src.m_left = 0.0f;
		src.m_right = 65.0f;
		src.m_bottom = 430.0f;

		//表示位置の設定
		dst.m_top    = 120.0f+v_y;
		dst.m_left   = 300.0f+v_x;
		dst.m_right  = 380.0f+v_x;
		dst.m_bottom = 350.0f+v_y;

		//描画
		Draw::Draw(11, &src, &dst, c, 0.0f);


		//オブジェクトbed-----------------------------------------
		//切り取り位置の設定
		src.m_top = 0.0f;
		src.m_left = 90.0f;
		src.m_right = 0.0f;
		src.m_bottom = 97.0f;

		dst.m_top = 0.0f + m_y;
		dst.m_left = 150.0f + m_x;
		dst.m_right = 0.0f + m_x;
		dst.m_bottom = 200.0f + m_y;

		//描画
		Draw::Draw(13, &src, &dst, c, 0.0f);

		src.m_top = 98.0f;
		src.m_left = 90.0f;
		src.m_right = 0.0f;
		src.m_bottom = 193.0f;

		dst.m_top = 0.0f +400;
		dst.m_left = 150.0f ;
		dst.m_right = 0.0f ;
		dst.m_bottom = 200.0f +400;

		//描画
		Draw::Draw(13, &src, &dst, c, 180.0f);

		//カーペット----------------------------------------
		src.m_top = 0.0f;
		src.m_left = 320.0f;
		src.m_right = 385.0f;
		src.m_bottom = 64.0f;

		dst.m_top = 0.0f + 155;
		dst.m_left = 0.0f + 255;
		dst.m_right = 300.0f + 255;
		dst.m_bottom = 300.0f + 155;

		Draw::Draw(12, &src, &dst, c, 0.0f);

		dst.m_top = 0.0f + 290;
		dst.m_left = 0.0f + 730;
		dst.m_right = 70.0f + 730;
		dst.m_bottom = 120.0f + 290;

		Draw::Draw(12, &src, &dst, c, 0.0f);

		//机とソファ---------------------------------------------------
		src.m_top = 0.0f;
		src.m_left = 128.0f;
		src.m_right = 0.0f;
		src.m_bottom = 100.0f;

		dst.m_top = 0.0f + my;
		dst.m_left = 200.0f + mx;
		dst.m_right = 0.0f + mx;
		dst.m_bottom = 200.0f + my;

		Draw::Draw(14, &src, &dst, c, 0.0f);
}
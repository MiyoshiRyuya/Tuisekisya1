//ここにマップ名書いてください

//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "Map2.h"
#include"ObjHero.h"
#include"Objtrap.h"

//使用するネームスペース
using namespace GameL;
float genzaiti; //現在地

//イニシャライズ
void CObjMap2::Init()
{
	m_x = 0;
	m_y = 0;
	Hits::SetHitBox(this, m_x, m_y + 350, 60, 50, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, m_x+100, m_y + 390, 150, 150, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, m_x + 640, m_y + 380, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, m_x + 640, m_y + 500, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, m_x + 500, m_y + 500, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);

	ax = 500;
	ay = 380;
	Hits::SetHitBox(this, ax, ay, 64, 64, ELEMENT_BLUE, OBJ_MAP6, 2);

	kx = 0;
	ky = 200;
	Hits::SetHitBox(this, kx, ky-15, 60, 64, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx + 215, ky - 5, 35, 50, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx + 415, ky - 5, 35, 50, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx + 615, ky - 5, 35, 50, ELEMENT_GREEN, OBJ_MAP6, 2);

	bx = 0;
	by = 0;
	Hits::SetHitBox(this, bx, by, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 1);

	idouX = 0;
	idouY = 0;
	Hits::SetHitBox(this, idouX + 770, idouY + 250, 30, 100, ELEMENT_GREEN, OBJ_MOVE9, 1);

	mx = 0;
	my = 0;
	Hits::SetHitBox(this, mx , my + 250, 30, 80, ELEMENT_BLUE, OBJ_MOVE10, 1);

	x = 0;
	y = 0;
	Hits::SetHitBox(this, x += 300, y += 590, 150, 10, ELEMENT_RED, OBJ_MOVE7, 1);
}

//アクション
void CObjMap2::Action()
{

	genzaiti = 2;

}

//ドロー
void CObjMap2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;
	//椅子描画1
	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f +350;
	dst.m_left = 0.0f -10;
	dst.m_right = 64.0f -10;
	dst.m_bottom = 64.0f +350 ;
	
	Draw::Draw(50, &src, &dst, c, 90.0f);

	//椅子描画2
	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + 500;
	dst.m_right = 0.0f + 500;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f +360;
	dst.m_left = 0.0f +110;
	dst.m_right = 64.0f +110;
	dst.m_bottom = 64.0f +360;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 360;
	dst.m_left = 0.0f + 170;
	dst.m_right = 64.0f + 170;
	dst.m_bottom = 64.0f + 360;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 405;
	dst.m_left = 0.0f + 70;
	dst.m_right = 64.0f + 70;
	dst.m_bottom = 64.0f + 405;

	Draw::Draw(50, &src, &dst, c, 90.0f);

	dst.m_top = 0.0f + 450;
	dst.m_left = 0.0f + 70;
	dst.m_right = 64.0f + 70;
	dst.m_bottom = 64.0f + 450;

	Draw::Draw(50, &src, &dst, c, 90.0f);

	dst.m_top = 0.0f + 400;
	dst.m_left = 0.0f + 220;
	dst.m_right = 64.0f + 220;
	dst.m_bottom = 64.0f + 400;

	Draw::Draw(50, &src, &dst, c, 270.0f);

	dst.m_top = 0.0f + 450;
	dst.m_left = 0.0f + 220;
	dst.m_right = 64.0f + 220;
	dst.m_bottom = 64.0f + 450;

	Draw::Draw(50, &src, &dst, c, 270.0f);

	//机描画
	dst.m_top = 0.0f + ay;
	dst.m_left = 64.0f + ax;
	dst.m_right = 0.0f + ax;
	dst.m_bottom = 64.0f + ay;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	//机描画
	dst.m_top = 0.0f +400;
	dst.m_left = 0.0f +100;
	dst.m_right = 150.0f +100;
	dst.m_bottom = 150.0f +400;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 380;
	dst.m_left = 0.0f + 640;
	dst.m_right = 64.0f + 640;
	dst.m_bottom = 64.0f + 380;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 500;
	dst.m_left = 0.0f + 640;
	dst.m_right = 64.0f + 640;
	dst.m_bottom = 64.0f + 500;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 500;
	dst.m_left = 0.0f + 500;
	dst.m_right = 64.0f + 500;
	dst.m_bottom = 64.0f + 500;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	//植木描画1

	dst.m_top = 0.0f + ky-10;
	dst.m_left = 64.0f + kx;
	dst.m_right = 0.0f + kx;
	dst.m_bottom = 64.0f + ky-10;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//植木描画2
	dst.m_top = 0.0f + ky - 10;
	dst.m_left = 64.0f + 200;
	dst.m_right = 0.0f + 200;
	dst.m_bottom = 64.0f + ky - 10;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//植木描画3
	dst.m_top = 0.0f + ky - 10;
	dst.m_left = 64.0f + 400;
	dst.m_right = 0.0f + 400;
	dst.m_bottom = 64.0f + ky - 10;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//植木描画4
	dst.m_top = 0.0f + ky - 10;
	dst.m_left = 64.0f + 600;
	dst.m_right = 0.0f + 600;
	dst.m_bottom = 64.0f + ky - 10;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 728.0f;
	src.m_bottom = 100.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f; ;
	dst.m_right = 800.0f;
	dst.m_bottom = 110.0f;

	//描画
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//ろうそく
	src.m_top = 0.0f;
	src.m_left = 320.0f;
	src.m_right = 256.0f;
	src.m_bottom = 85.0f;

	dst.m_top = 0.0f + 70;
	dst.m_left = 0.0f + 100;
	dst.m_right = 80.0f + 100;
	dst.m_bottom = 80.0f + 70;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 70;
	dst.m_left = 0.0f + 300;
	dst.m_right = 80.0f + 300;
	dst.m_bottom = 80.0f + 70;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 70;
	dst.m_left = 0.0f + 500;
	dst.m_right = 80.0f + 500;
	dst.m_bottom = 80.0f + 70;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 70;
	dst.m_left = 0.0f + 700;
	dst.m_right = 80.0f + 700;
	dst.m_bottom = 80.0f + 70;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	//カーペット
	src.m_top = 0.0f;
	src.m_left = 320.0f;
	src.m_right = 385.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + 250;
	dst.m_left = 40.0f + 730;
	dst.m_right = 70.0f + 730;
	dst.m_bottom = 85.0f + 250;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 250;
	dst.m_left = 0.0f -30;
	dst.m_right = 70.0f -30;
	dst.m_bottom = 85.0f + 250;

	Draw::Draw(52, &src, &dst, c, 0.0f);


}
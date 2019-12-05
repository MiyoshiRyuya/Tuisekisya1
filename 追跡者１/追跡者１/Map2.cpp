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

extern float genzaiti; //現在地

//イニシャライズ
void CObjMap2::Init()
{


	m_x = 0;
	m_y = 350;
	Hits::SetHitBox(this, m_x, m_y + 10, 60, 50, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, m_x + 500, m_y, 50, 60, ELEMENT_GREEN, OBJ_MAP6, 2);

	ax = 500;
	ay = 380;
	Hits::SetHitBox(this, ax, ay, 64, 64, ELEMENT_BLUE, OBJ_MAP6, 2);

	kx = 0;
	ky = 200;
	Hits::SetHitBox(this, kx, ky, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx + 200, ky, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx + 400, ky, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx + 600, ky, 64, 64, ELEMENT_GREEN, OBJ_MAP6, 2);

	bx = 0;
	by = 0;
	Hits::SetHitBox(this, bx, by, 800, 110, ELEMENT_GREEN, OBJ_MAP4, 1);

	idouX = 0;
	idouY = 0;
	Hits::SetHitBox(this, idouX + 770, idouY + 250, 30, 100, ELEMENT_GREEN, OBJ_MOVE9, 1);

	mx = 0;
	my = 0;
	Hits::SetHitBox(this, mx + 0, my + 250, 30, 100, ELEMENT_BLUE, OBJ_MOVE10, 1);

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

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;
	
	Draw::Draw(50, &src, &dst, c, 90.0f);

	//椅子描画2
	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + 500;
	dst.m_right = 0.0f + 500;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	//机描画
	dst.m_top = 0.0f + ay;
	dst.m_left = 64.0f + ax;
	dst.m_right = 0.0f + ax;
	dst.m_bottom = 64.0f + ay;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	//植木描画1

	dst.m_top = 0.0f + ky;
	dst.m_left = 64.0f + kx;
	dst.m_right = 0.0f + kx;
	dst.m_bottom = 64.0f + ky;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//植木描画2
	dst.m_top = 0.0f + ky;
	dst.m_left = 64.0f + 200;
	dst.m_right = 0.0f + 200;
	dst.m_bottom = 64.0f + ky;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//植木描画3
	dst.m_top = 0.0f + ky;
	dst.m_left = 64.0f + 400;
	dst.m_right = 0.0f + 400;
	dst.m_bottom = 64.0f + ky;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//植木描画4
	dst.m_top = 0.0f + ky;
	dst.m_left = 64.0f + 600;
	dst.m_right = 0.0f + 600;
	dst.m_bottom = 64.0f + ky;

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











	//敵
	src.m_top = 0.0f;
	src.m_left = 16.0f;
	src.m_right = 42.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 84.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 156.0f + m_y;

	//描画
	Draw::Draw(5, &src, &dst, c, 0.0f);








}
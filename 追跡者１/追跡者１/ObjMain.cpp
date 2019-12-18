#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjMain.h"
#include<time.h>

using namespace GameL;


extern float genzaiti; //現在地

void CObjMain::Init()
{
	m_x = 0;
	m_y = 0;

	Hits::SetHitBox(this, m_x, m_y+500, 500, 100, ELEMENT_GREEN, OBJ_MAP6, 2);//スカル
	Hits::SetHitBox(this, m_x, m_y , 100, 100, ELEMENT_GREEN, OBJ_MAP6, 2);//クマ
	Hits::SetHitBox(this, m_x, m_y+200, 100, 200, ELEMENT_GREEN, OBJ_MAP6, 2);//クマ
	Hits::SetHitBox(this, m_x+730, m_y , 70, 240, ELEMENT_GREEN, OBJ_MAP6, 2);//クマ
	Hits::SetHitBox(this, m_x + 730, m_y+400, 70, 240, ELEMENT_GREEN, OBJ_MAP6, 2);//クマ

}

void CObjMain::Action()
{

	genzaiti = 1;
}

void CObjMain::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;
	//スカラ
	src.m_top = 0.0f;
	src.m_left = 133.0f;
	src.m_right = 215.0f;
	src.m_bottom = 66.0f;

	dst.m_top = 0.0f +500;
	dst.m_left = 0.0f ;
	dst.m_right = 100.0f ;
	dst.m_bottom = 100.0f+500 ;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 500;
	dst.m_left = 0.0f+100;
	dst.m_right = 100.0f+100;
	dst.m_bottom = 100.0f + 500;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 500;
	dst.m_left = 0.0f + 200;
	dst.m_right = 100.0f + 200;
	dst.m_bottom = 100.0f + 500;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 500;
	dst.m_left = 0.0f + 300;
	dst.m_right = 100.0f + 300;
	dst.m_bottom = 100.0f + 500;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 500;
	dst.m_left = 0.0f + 400;
	dst.m_right = 100.0f + 400;
	dst.m_bottom = 100.0f + 500;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	//クマ種類
	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f +500;
	dst.m_left = 100.0f +700;
	dst.m_right = 0.0f +700;
	dst.m_bottom = 100.0f +500;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 32.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f ;
	dst.m_left = 0.0f ;
	dst.m_right = 100.0f ;
	dst.m_bottom = 100.0f ;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	src.m_top = 32.0f;
	src.m_left = 0.0f;
	src.m_right = 32.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + 300;
	dst.m_left = 100.0f ;
	dst.m_right = 0.0f ;
	dst.m_bottom = 100.0f + 300;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	src.m_top = 32.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f +200;
	dst.m_left = 100.0f ;
	dst.m_right = 0.0f ;
	dst.m_bottom = 100.0f+200 ;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	//本
	src.m_top = 0.0f;
	src.m_left = 127.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f ;
	dst.m_left = 0.0f +700;
	dst.m_right = 130.0f +700;
	dst.m_bottom = 130.0f ;

	Draw::Draw(15, &src, &dst, c, 0.0f);
	//カーペット
	src.m_top = 0.0f;
	src.m_left = 320.0f;
	src.m_right = 385.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + 150;
	dst.m_left = 0.0f + 250;
	dst.m_right = 300.0f + 250;
	dst.m_bottom = 300.0f + 150;

	Draw::Draw(13, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 250;
	dst.m_left = 0.0f + 730;
	dst.m_right = 70.0f + 730;
	dst.m_bottom = 120.0f + 250;

	Draw::Draw(13, &src, &dst, c, 0.0f);


	//ろうそく
	src.m_top = 0.0f;
	src.m_left = 320.0f;
	src.m_right = 256.0f;
	src.m_bottom = 85.0f;

	dst.m_top = 0.0f +230;
	dst.m_left = 320.0f +50;
	dst.m_right = 256.0f +50;
	dst.m_bottom = 85.0f +230;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 230;
	dst.m_left = 320.0f + 180;
	dst.m_right = 256.0f + 180;
	dst.m_bottom = 85.0f + 230;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 180;
	dst.m_left = 0.0f + 730;
	dst.m_right = 70.0f + 730;
	dst.m_bottom = 70.0f + 180;

	Draw::Draw(15, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 340;
	dst.m_left = 0.0f + 730;
	dst.m_right = 70.0f + 730;
	dst.m_bottom = 70.0f + 340;

	Draw::Draw(15, &src, &dst, c, 0.0f);

}
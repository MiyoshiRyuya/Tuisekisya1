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

//イニシャライズ
void CObjMap2::Init()
{
	m_x = 300;
	m_y = 0;
	Hits::SetHitBox(this, m_x , m_y , 64, 64, ELEMENT_NULL, OBJ_MAP5, 2);

	ax = 700;
	ay = 500;
	Hits::SetHitBox(this, ax + 10, ay + 10, 32, 32, ELEMENT_BLUE, OBJ_MAP5, 2);

}

//アクション
void CObjMap2::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x , m_y );
	CHitBox*hito = Hits::GetHitBox(this);
	hito->SetPos(ax, ay);

}

//ドロー
void CObjMap2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(13, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + ay;
	dst.m_left = 64.0f + ax;
	dst.m_right = 0.0f + ax;
	dst.m_bottom = 64.0f + ay;

	Draw::Draw(14, &src, &dst, c, 0.0f);

}
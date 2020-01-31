#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture39.h"

using namespace GameL;

void CObjFurniture39::Init()
{
	m_x = 173;
	m_y = 343;

	Hits::SetHitBox(this, m_x , m_y , 145, 70, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture39::Action()
{

}

void CObjFurniture39::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 260.0f;
	src.m_right = 0.0f;
	src.m_bottom = 180.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 260.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 180.0f + m_y;

	Draw::Draw(14, &src, &dst, c, 0.0f);//キッチンテーブル2
}
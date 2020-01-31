#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture20.h"

using namespace GameL;

void CObjFurniture20::Init()
{
	m_x = 1;
	m_y = 1;

	Hits::SetHitBox(this, m_x , m_y , 45, 600, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture20::Action()
{

}

void CObjFurniture20::Draw()
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

	Draw::Draw(13, &src, &dst, c, 0.0f);//キッチンテーブル1
}
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture36.h"

using namespace GameL;

void CObjFurniture36::Init()
{
	m_x = 542;
	m_y = 86;

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 40, 40, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture36::Action()
{

}

void CObjFurniture36::Draw()
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

	Draw::Draw(23, &src, &dst, c, 0.0f);//‘Ü
}
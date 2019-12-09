#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture4.h"

using namespace GameL;

void CObjFurniture4::Init()
{

	m_x = 350;
	m_y = 200;

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 108, 160, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture4::Action()
{

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

}

void CObjFurniture4::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 99.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 108.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 160.0f + m_y;

	Draw::Draw(9, &src, &dst, c, 0.0f);

}
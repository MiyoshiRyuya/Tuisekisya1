#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture9.h"

using namespace GameL;

void CObjFurniture9::Init()
{

	m_x = 180;
	m_y = 0;

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 75, 80, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture9::Action()
{

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

}

void CObjFurniture9::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 96.0f;
	src.m_right = 64.0f;
	src.m_bottom = 45.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 84.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 150.0f + m_y;

	Draw::Draw(10, &src, &dst, c, 0.0f);

}
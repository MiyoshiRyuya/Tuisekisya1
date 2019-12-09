#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture8.h"

using namespace GameL;

void CObjFurniture8::Init()
{

	m_x = 464;
	m_y = 230;

		Hits::SetHitBox(this, m_x + 10, m_y + 10, 32, 49, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture8::Action()
{

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

}

void CObjFurniture8::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 32.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 95.0f + m_y;

	Draw::Draw(11, &src, &dst, c, 0.0f);

}
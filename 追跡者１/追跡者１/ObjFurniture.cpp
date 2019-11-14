#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture.h"

using namespace GameL;

void CObjFurniture::Init()
{
	
	m_x = 160;
	m_y = 400;
	
	Hits::SetHitBox(this, m_x + 10, m_y + 10, 40, 40, ELEMENT_BLUE, OBJ_FURNITURE, 1);

}

void CObjFurniture::Action()
{
	
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);
	
}

void CObjFurniture::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;
	
	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(3, &src, &dst, c, 0.0f);
	
}
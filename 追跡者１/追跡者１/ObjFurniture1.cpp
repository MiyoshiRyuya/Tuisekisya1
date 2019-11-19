#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture1.h"

using namespace GameL;

void CObjFurniture1::Init()
{
	m_x = 740;
	m_y = 1;

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 85, 85, ELEMENT_BLUE, OBJ_FURNITURE1, 1);

}

void CObjFurniture1::Action()
{
	
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);
	
}

void CObjFurniture1::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 32.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 96.0f + m_y;

	Draw::Draw(4, &src, &dst, c, 0.0f);
}
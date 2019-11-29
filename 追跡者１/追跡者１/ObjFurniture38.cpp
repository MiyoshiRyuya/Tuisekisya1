#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjFurniture38.h"

using namespace GameL;

void CObjFurniture38::Init()
{
	m_x = 523;
	m_y = 231;

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 130, 70, ELEMENT_BLUE, OBJ_MAP6, 1);

}

void CObjFurniture38::Action()
{

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

}

void CObjFurniture38::Draw()
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
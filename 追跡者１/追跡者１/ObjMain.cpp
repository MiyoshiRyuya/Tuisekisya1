#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjMain.h"
#include<time.h>

using namespace GameL;


extern float genzaiti; //Œ»Ý’n

void CObjMain::Init()
{
	m_x = 500;
	m_y = 500;

	Hits::SetHitBox(this, m_x , m_y , 100, 32, ELEMENT_BLUE, OBJ_MAIN, 2);

}

void CObjMain::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

	genzaiti = 1;
}

void CObjMain::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 32.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 32.0f + m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}
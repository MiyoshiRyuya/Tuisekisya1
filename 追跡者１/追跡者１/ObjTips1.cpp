#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjTips1.h"

using namespace GameL;
bool Memoflag2 = false;

void CObjTips1::Init()
{

	m_x = 360;
	m_y = 540;
	
}

void CObjTips1::Action()
{
	if (Input::GetVKey(VK_RETURN) == true)
	{

		Memoflag2 = true;
	}
}

void CObjTips1::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 52.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 52.0f + m_x;
	dst.m_bottom = 48.0f + m_y;

	Draw::Draw(30, &src, &dst, c, 0.0f);
}
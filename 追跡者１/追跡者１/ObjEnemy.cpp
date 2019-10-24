#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"

#include"GameHead.h"
#include"ObjEnemy.h"

using namespace GameL;

void CObjEnemy::Init()
{
	m_x = 500.0f;
	m_y = 100.0f;
	m_vx = 0.0f;
	m_vy = 0.0f;
}
void CObjEnemy::Action()
{
	m_vx = -1.0f;
	m_vy = 0.0f;
	m_x = ex;
	m_y = ey;
	if (ex > m_vx)
	{
		ex--;
	}
	if (ex < m_vx)
	{
		ex++;
	}
	if (ey > m_vy)
	{
		ey--;
	}
	if (ey < m_vy)
	{
		ey++;
	}

}
void CObjEnemy::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 32.0f;
	src.m_right = 64.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f+m_y;
	dst.m_left = 32.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 32.0f+m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}
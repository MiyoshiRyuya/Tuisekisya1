#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"ObjEnemy.h"

using namespace GameL;

void CObjEnemy::Init()
{
	m_x = 400;
	m_y = 400;
	m_vx = 0.0f;
	m_vy = 0.0f;
	m_len = 0.0f;

	Hits::SetHitBox(this, m_x, m_y, 16, 32, ELEMENT_ENEMY, OBJ_ENEMY, 1);

}
void CObjEnemy::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float x = obj->GetX() - m_x;
	float y = obj->GetY() - m_y;
	
	m_len = x * x + y * y;

	m_len = sqrt(m_len);
	m_x += (x / m_len);
	m_y += (y / m_len);

	/*if (m_x > x)
		m_x--;
	if (m_x < x)
		m_x++;
	if (m_y > y)
		m_y--;
	if (m_y < y)
		m_y++;

	float ar = atan2(-y, x)*180.0f / 3.14f;

	if (ar < 0)
	{
		ar = 360 - abs(ar);
	}

	float br = atan2(-m_vy, m_vx)*180.0f / 3.14f;
	if (br < 0)
	{
		br = 360 - abs(br);
	}

	if (ar - br > 20)
	{
		m_vx = cos(3.14 / 180 * ar);
		m_vx = -sin(3.14 / 180 * ar);
	}

	float r = 3.14 / 180.0f;
	if (ar < br)
	{
		m_vx = m_vx * cos(r) - m_vy * sin(r);
		m_vy = m_vy * cos(r) + m_vx * sin(r);
	}
	else
	{
		m_vx = m_vx * cos(-r) - m_vy * sin(-r);
		m_vy = m_vy * cos(-r) + m_vx * sin(-r);

	}*/
	//移動方向
	//速度を付ける
	m_vx *= 1.5f;
	m_vy *= 1.5f;
	//移動ベクトルを座標にに加算する
	m_x += m_vx;
	m_y += m_vy;

}
void CObjEnemy::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 16.0f;
	src.m_bottom = 30.0f;

	dst.m_top = 0.0f+m_y;
	dst.m_left = 30.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 30.0f+m_y;

	Draw::Draw(2, &src, &dst, c, 0.0f);
}
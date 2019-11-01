#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"Objtrap.h"

using namespace GameL;

void CObjtrap::Init()
{
	m_x = 100;
	m_y = 200;

	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_TRAP, 1);

}
void CObjtrap::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

}
void CObjtrap::Draw()
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
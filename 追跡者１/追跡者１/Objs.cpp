#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"Objs.h"

using namespace GameL;
bool Memoflag1 = false;

void CObjs::Init()
{

	m_x = 360;
	m_y = 540;
	Hits::SetHitBox(this, m_x, m_y, 64, 64, ELEMENT_GREEN, OBJ_CLOSET, 1);
}

void CObjs::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);
	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			Memoflag1 = true;
			this->SetStatus(false);   //自身に削除命令を出す。
			Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
		}
	}
}

void CObjs::Draw()
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
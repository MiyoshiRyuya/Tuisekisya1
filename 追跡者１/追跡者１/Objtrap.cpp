#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"Objtrap.h"

using namespace GameL;

//コンストラクタ
CObjtrap::CObjtrap(float x,float y)
{
	m_x = x;
	m_y = y;
}

void CObjtrap::Init()
{


	Hits::SetHitBox(this, m_x+10, m_y+10, 44, 64, ELEMENT_RED, OBJ_TRAP, 1);

}

void CObjtrap::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x+10, m_y+10);

}

void CObjtrap::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right =0.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(6, &src, &dst, c, 0.0f);

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	//描画
	Draw::Draw(3, &src, &dst, c, 0.0f);
}
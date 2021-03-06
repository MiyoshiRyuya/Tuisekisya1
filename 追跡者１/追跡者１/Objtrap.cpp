#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include"GameHead.h"
#include"Objtrap.h"
#include<math.h>
using namespace GameL;

//コンストラクタ
CObjtrap::CObjtrap(float x,float y)
{
	//位置座標
	m_x = x;
	m_y = y;
	//ベクトル移動
	vx = 4.3;
	vy = 4.3;
}

void CObjtrap::Init()
{
	Hits::SetHitBox(this, m_x, m_y, 45, 40, ELEMENT_RED, OBJ_TRAP, 1);

}

void CObjtrap::Action()
{
	m_y += vy;
	m_x += vx;
	//斜めバウンド
	if (m_x + 32.0f >= 780 || m_y + 64.0f <= 40)
	{

			vy *= -1;
			vx *= -1;

	}
	m_y += vy;
	m_x += vx;

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

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

	//描画
	Draw::Draw(3, &src, &dst, c, 90.0f);

}





//コンストラクタ
CObjtrap1::CObjtrap1(float x, float y)
{
	//位置座標
	m_x = x;
	m_y = y;
	//ベクトル移動
	vx = 2;
	vy = 2;
}

void CObjtrap1::Init()
{
	Hits::SetHitBox(this, m_x, m_y+10, 45, 40, ELEMENT_RED, OBJ_TRAP, 1);

}

void CObjtrap1::Action()
{
	m_x += vx;
	//横バウンド
	if (m_x + 32.0f >= 800 || m_x <= 0)
	{

		vx *= -1;
	}
	m_x += vx;

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y+10);

}

void CObjtrap1::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 64.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	//描画
	Draw::Draw(3, &src, &dst, c, 90.0f);

}






//コンストラクタ
CObjtrap2::CObjtrap2(float x, float y)
{
	//位置座標
	m_x = x;
	m_y = y;
	//ベクトル移動
	vx = 1;
	vy = 1;
}

void CObjtrap2::Init()
{
	Hits::SetHitBox(this, m_x+10, m_y, 45, 40, ELEMENT_RED, OBJ_TRAP, 1);

}

void CObjtrap2::Action()
{
	m_y += vy;
	//縦バウンド
	if (m_y + 64.0f >= 600 || m_y <= 0)
	{

		vy *= -1;
	}
	m_y += vy*5;

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x+10, m_y);

}

void CObjtrap2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	//描画
	Draw::Draw(3, &src, &dst, c, 180.0f);

}







//コンストラクタ
CObjtrap3::CObjtrap3(float x, float y)
{
	//位置座標
	m_x = x;
	m_y = y;
	//ベクトル移動
	vx = 1;
	vy = 1;
}

void CObjtrap3::Init()
{
	Hits::SetHitBox(this, m_x, m_y, 45, 40, ELEMENT_RED, OBJ_TRAP, 1);

}

void CObjtrap3::Action()
{
	m_y += vy;
	m_x += vx;
	//縦バウンド
	if (m_y + 64.0f >= 600 || m_y <= 0)
	{

		vy *= -1;
	}
	//横バウンド
	if (m_x + 32.0f >= 770 || m_x <= 0)
	{

		vx *= -1;
	}
	m_y += vy*4;
	m_x += vx*2;

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

}

void CObjtrap3::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	//描画
	Draw::Draw(16, &src, &dst, c, 90.0f);


}
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"
#include<time.h>

#include"GameHead.h"
#include"ObjEnemy.h"


using namespace GameL;

float g_xz=0;
float g_yz=0;

extern bool Textflag4;


void CObjEnemy::Init()
{
	int px;           //敵ランダム
	int py;

	m_vx = 0.0f;
	m_vy = 0.0f;
	m_len = 0.0f;
	m_ani_time = 0;
	m_ani_frame = 1;

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float s_x = obj->GetX();
	float s_y= obj->GetY();
	
	srand(time(NULL));
	do
	{
		

		px = (rand() % 801); 

		py = (rand() % 601); 

		m_x = s_x - px;
		m_y = s_y - py;

		r = sqrt(m_x*m_x + m_y * m_y);

	
	} while (r <= 300);

	m_ani_max_time = 4;

	Hits::SetHitBox(this, m_x, m_y, 44, 140, ELEMENT_ENEMY, OBJ_ENEMY, 1);

}
//アクション
void CObjEnemy::Action()
{	
	//	現在の位置を保存する
	g_xz = m_x;
	g_yz = m_y;


	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float x = obj->GetX() - m_x;
	float y = obj->GetY() - m_y;
	
	m_len = x * x + y * y;

	m_len = sqrt(m_len);
	m_x += (x / m_len);
	m_y += (y / m_len);


	//移動方向
	//速度を付ける
	m_vx *= 5.8f;
	m_vy *= 5.8f;

	//if(m_vx==false)
	//移動ベクトルを座標に加算する
	m_x += m_vx;
	m_y += m_vy;

	//敵オブジェクトと接触したら主人公削除
	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
	{
	
		g_xz = 600;
		g_yz = 400;

	}
	
}
void CObjEnemy::Draw()
{
	int AniData[4] =
	{
		1,2,3,4,
	};

	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 16.0f;
	src.m_right = 42.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f+m_y;
	dst.m_left = 84.0f+m_x;
	dst.m_right = 0.0f+m_x;
	dst.m_bottom = 156.0f+m_y;

	Draw::Draw(5, &src, &dst, c, 0.0f);

	if (Textflag4 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 230.0f;
		dst.m_left = 300.0f;
		dst.m_right = 556.0f;
		dst.m_bottom = 456.0f;

		Draw::Draw(30, &src, &dst, c, 0.0f);
	}
}
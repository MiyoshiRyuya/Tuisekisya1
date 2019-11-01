#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\HitBoxManager.h"

#include"GameHead.h"
#include"ObjEnemy.h"

using namespace GameL;

//コンストラクタ
/*CObjEnemy::CObjEnemy(float x,float y)
{
	m_x = x;
	m_y = y;

	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ENEMY, 1);

}*/

void CObjEnemy::Init()
{
	m_x = 600;
	m_y = 400;
	m_vx = 0.0f;
	m_vy = 0.0f;
	m_len = 0.0f;

	// 当たり判定用HitBoxを作成
		Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ENEMY, 1);
}
void CObjEnemy::Action()
{

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float x = obj->GetX() - m_x;
	float y = obj->GetY() - m_y;
	
	m_len = x * x + y * y;

	m_len = sqrt(m_len);
	m_x += (x / m_len);
	m_y += (y / m_len);

	//移動方向
	//速度を付ける
	m_vx *= 1.5f;
	m_vy *= 1.5f;
	//移動ベクトルを座標にに加算する
	m_x += m_vx;
	m_y += m_vy;

	//HitBoxの内容を更新
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	
	//敵機オブジェクトと接触したら主人公削除
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
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
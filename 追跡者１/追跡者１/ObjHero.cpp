//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjHero.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjHero::Init()
{
	
	m_px=0.0f;//位置
	m_py=0.0f;
	m_vx=0;//移動ベクトル
	m_vy=0;
	m_posture = 1.0f;//右向き0.0f 左向き1.0f
	m_mos_x = 0.0f;
	m_mos_y = 0.0f;

	Hits::SetHitBox(this, m_vx, m_vy, 40,60, ELEMENT_PLAYER, OBJ_HERO, 1);

}

//アクション
void CObjHero::Action()
{
	//マウス操作

	//移動ベクトルの破棄
	m_vx = 0.0f;
	m_vy = 0.0f;

	//キーの入力方向
	if (Input::GetVKey('D') == true)
	{
		m_vx += 2.0f;
	}

	if (Input::GetVKey('A') == true)
	{
		m_vx -= 2.0f;
	}

	if (Input::GetVKey('W') == true)
	{
		m_vy -= 2.0f;
	}

	if (Input::GetVKey('S') == true)
	{
		m_vy += 2.0f;
	}

	if (m_vx+32.0f>800.0f)
	{
		m_vx = 800.0f - 32.0f;
	}

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px+27, m_py+5);




	//位置の更新
	m_px += m_vx;
	m_py += m_vy;

}

//ドロー
void CObjHero::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 175.0f;
	src.m_bottom = 133.0f;

	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right = 64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}

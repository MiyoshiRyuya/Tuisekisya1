#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjHeroMove.h"

//使用するネームスペース
using namespace GameL;

void CObjHeroMove::Init()
{
	m_x = 0;
	m_y = 0;
	v_x = 0;
	v_y = 0;
}

void CObjHeroMove::Action()
{
	if (Input::GetVKey(KEY_INPUT_RIGHT)==true)
	{
		m_x += 1.0f;
	}
	if (Input::GetVKey(KEY_INPUT_UP) == true)
	{
		m_y += 1.0f;
	}
	if (Input::GetVKey(KEY_INPUT_DOWN) == true)
	{
		v_y += 1.0f;
	}
	if (Input::GetVKey(KEY_INPUT_LEFT) == true)
	{
		v_x += 1.0f;
	}
}

void CObjHeroMove::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 32.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 32.0f;
	dst.m_bottom = 32.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}
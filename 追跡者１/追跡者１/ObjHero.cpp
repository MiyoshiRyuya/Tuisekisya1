//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjHero.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjHero::Init()
{
	
	m_px=0.0f;//�ʒu
	m_py=0.0f;
	m_vx;//�ړ��x�N�g��
	m_vy;
	m_posture = 1.0f;//�E����0.0f ������1.0f
	m_mos_x = 0.0f;
	m_mos_y = 0.0f;

	Hits::SetHitBox(this, m_x, m_y, 38, 58, ELEMENT_PLAYER, OBJ_HERO, 1);

}

//�A�N�V����
void CObjHero::Action()
{
	//�}�E�X����

	//�ړ��x�N�g���̔j��
	m_vx = 0.0f;
	m_vy = 0.0f;

	//�L�[�̓��͕���
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
	hit->SetPos(m_vx, m_y);




	//�ʒu�̍X�V
	m_px += m_vx;
	m_py += m_vy;

}

//�h���[
void CObjHero::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 160.0f;
	src.m_bottom = 160.0f;

	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right = 64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}

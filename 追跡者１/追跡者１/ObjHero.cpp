//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjHero.h"
#include "ObjMenu.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

float g_Xz;
float g_Yz;

//�C�j�V�����C�Y
void CObjHero::Init()
{
	m_px = g_Xz;//�ʒu
	m_py = g_Yz;
	m_vx;//�ړ��x�N�g��
	m_vy;
	m_posture = 1.0f;//�E����0.0f ������1.0f
	m_mos_x = 0.0f;
	m_mos_y = 0.0f;

	//stage�Ƃ̏����m�F�p
	m_hit_up = false;
	m_hit_down = false;
	m_hit_left = false;
	m_hit_right = false;

	Hits::SetHitBox(this, m_vx, m_vy, 40, 64, ELEMENT_PLAYER, OBJ_HERO, 1);

}

//�A�N�V����
void CObjHero::Action()
{
	//�ړ��x�N�g���̔j��
	m_vx = 0.0f;
	m_vy = 0.0f;
	
	/*if (m_x < -1 && m_y < -1) {
		m_x = 0.0f;
		m_y = 0.0f;
	}*/

	m_x = m_px;
	m_y = m_py;

	//	���݂̈ʒu��ۑ�����
	g_Xz = m_x; 
	g_Yz = m_y;

	//E�{�^���������ƃQ�[����ʂɈړ�����
	if (Input::GetVKey('M') == true)
	{
		Scene::SetScene(new CSceneMenu());
	}

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

	//M�L�[�������ƃQ�[����ʂɈړ�����
	if (Input::GetVKey('M') == true)
	{
		Scene::SetScene(new CSceneMenu());
	}



	//�ʒu�̍X�V
	m_px += m_vx;
	m_py += m_vy;

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px + 25, m_py);

	//�G�@�I�u�W�F�N�g�ƐڐG�������l���폜
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);

		//��l�����łŃV�[�����Q�[���I�[�o�[��ʂɈڍs����
		Scene::SetScene(new CSceneGameOver());
	}
	//�g���b�v�I�u�W�F�N�g�ƐڐG�������l���폜
	if (hit->CheckObjNameHit(OBJ_TRAP) != nullptr)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);

		Scene::SetScene(new CSceneGameOver());
	}
}

//�h���[
void CObjHero::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 180.0f;
	src.m_bottom = 130.0f;

	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right = 64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}

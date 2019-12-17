//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"ObjHero.h"
#include "GameHead.h"
#include "Objsolve2.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

bool deleteflag2 = false;

CObjsolve2::CObjsolve2(float x, float y)
{
	m_px = x;
	m_py = y;
}

//�C�j�V�����C�Y
void CObjsolve2::Init()
{
	bool flag = CObjHero::Getflag();
	Hits::SetHitBox(this, m_px, m_py, 64, 64, ELEMENT_SOLVE, OBJ_SOLVE2, 1);
	if (deleteflag2 == true && flag == true)
	{
		this->SetStatus(false);   //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
	}

	m_x = 0.0f;
	m_y = 0.0f;
}

//�A�N�V����
void CObjsolve2::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);
	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			deleteflag2 = true;
			this->SetStatus(false);   //���g�ɍ폜���߂��o���B
			Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
		}
	}

	//E�{�^���������ƃQ�[����ʂɈړ�����
	if (Input::GetVKey('E') == true)
	{
		Scene::SetScene(new CSceneMain());
	}

}

//�h���[
void CObjsolve2::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right =64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	//��Ԗڂɓo�^�����O���t�B�b�N��src.dst.c�̏������ɕ`��
	Draw::Draw(50, &src, &dst, c, 0.0f);
}


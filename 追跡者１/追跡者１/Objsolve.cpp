//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"

#include "GameHead.h"
#include "Objsolve.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;



//�C�j�V�����C�Y
void CObjsolve::Init()
{
	m_x = 0.0f;
	m_y = 0.0f;
}

//�A�N�V����
void CObjsolve::Action()
{
	time++;

	if (time >= 10)
	{
		//E�{�^���������ƃQ�[����ʂɈړ�����
		if (Input::GetVKey(VK_RETURN) == true)
		{
			Scene::SetScene(new CSceneMain());
			time = 0;
		}
	}
}

//�h���[
void CObjsolve::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top    = 0.0f;
	src.m_left   = 0.0f;
	src.m_right  = 512.0f;
	src.m_bottom = 512.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top    = 50.0f + m_y;
	dst.m_left   = 200.0f + m_x;
	dst.m_right  = 600.0f + m_x;
	dst.m_bottom = 450.0f + m_y;

	//��Ԗڂɓo�^�����O���t�B�b�N��src.dst.c�̏������ɕ`��
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
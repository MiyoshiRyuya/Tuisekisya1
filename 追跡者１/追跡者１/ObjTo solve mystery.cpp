//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"

#include "GameHead.h"
#include "SceneTo solve mystery.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;



//�C�j�V�����C�Y
void CObjTosolvemystery::Init()
{
	
}

//�A�N�V����
void CObjTosolvemystery::Action()
{

}

//�h���[
void CObjTosolvemystery::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top    = 64.0f;
	src.m_left   = 64.0f;
	src.m_right  = 64.0f;
	src.m_bottom = 64.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top    = 150.0f + m_y;
	dst.m_left   = 150.0f + m_x;
	dst.m_right  = 300.0f + m_x;
	dst.m_bottom = 300.0f + m_y;

	//��Ԗڂɓo�^�����O���t�B�b�N��src.dst.c�̏������ɕ`��
	Draw::Draw(5, &src, &dst, c, 0.0f);
}
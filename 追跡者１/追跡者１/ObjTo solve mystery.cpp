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
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	m_x = 0.0f;
	m_y = 0.0f;
}

//�A�N�V����
void CObjTosolvemystery::Action()
{

}

//�h���[
void CObjTosolvemystery::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);

	if (m_mou_r == true)
		Font::StrDraw(L"R=�����Ă�", 20, 30, 12, c);
	else (m_mou_r == true)
		Font::StrDraw(L"R=�����Ă�", 20, 30, 12, c);

	if (m_mou_l == true)
		Font::StrDraw(L"R=�����Ă�", 20, 30, 12, c);
	else (m_mou_l == true)
		Font::StrDraw(L"R=�����Ă�", 20, 30, 12, c);

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top    = 0.0f;
	src.m_left   = 0.0f;
	src.m_right  = 64.0f;
	src.m_bottom = 64.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top    = 150.0f + m_y;
	dst.m_left   = 200.0f + m_x;
	dst.m_right  = 700.0f + m_x;
	dst.m_bottom = 450.0f + m_y;

	//��Ԗڂɓo�^�����O���t�B�b�N��src.dst.c�̏������ɕ`��
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
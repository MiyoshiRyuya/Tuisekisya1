//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"

#include "GameHead.h"
#include "ObjMap.h"
#include"ObjHero.h"
#include"Objtrap.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

extern float genzaiti; //���ݒn

//�C�j�V�����C�Y
void CObjMap::Init()
{
	m_x = 0;
	m_y = 0;
}

//�A�N�V����
void CObjMap::Action()
{
	genzaiti = 1;
}

//�h���[
void CObjMap::Draw()
{
	//�`�ʃJ���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //�`�挳�؂���ʒu
	RECT_F dst; //�`���\���ʒu

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(2, &src, &dst, c, 0.0f);

	src.m_top = 0.0f;
	src.m_left = 16.0f;
	src.m_right = 42.0f;
	src.m_bottom = 32.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 84.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 156.0f + m_y;

	Draw::Draw(5, &src, &dst, c, 0.0f);


}
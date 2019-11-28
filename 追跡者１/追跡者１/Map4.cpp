//�����Ƀ}�b�v�������Ă�������
//Kitcen

//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "Map4.h"
#include "ObjHero.h"
#include "Objtrap.h"




//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjMap4::Init()
{
	m_x = 300;
	m_y = 100;

	Hits::SetHitBox(this, m_x + 10, m_y + 10, 0, 0, ELEMENT_BLUE, OBJ_MAP4, 3);

}

//�A�N�V����
void CObjMap4::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

}

//�h���[
void CObjMap4::Draw()
{
	//�`��J���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //�`�挳�؂���ʒu
	RECT_F dst; //�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 600.0f;
	src.m_bottom = 500.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	//�`��
	Draw::Draw(2, &src, &dst, c, 0.0f);
	

	/*
	src.m_top = 32.0f;
	src.m_left = 64.0f;
	src.m_right = 32.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 110.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 110.0f + m_y;

	Draw::Draw(7, &src, &dst, c, 0.0f);//���E�\�N

	src.m_top = 0.0f;
	src.m_left = 81.0f;
	src.m_right = 0.0f;
	src.m_bottom = 66.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 81.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 66.0f + m_y;

	Draw::Draw(8, &src, &dst, c, 0.0f);//���E�\�N
	*/

	src.m_top = 0.0f;
	src.m_left = 260.0f;
	src.m_right = 0.0f;
	src.m_bottom = 180.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 260.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 180.0f + m_y;

	Draw::Draw(12, &src, &dst, c, 0.0f);//�L�b�`��

	
	

	
	
}
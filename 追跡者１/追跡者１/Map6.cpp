//�����Ƀ}�b�v�������Ă�������

//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "Map6.h"
#include "ObjHero.h"
#include "Objtrap.h"

#include "ObjFurniture.h"
#include "ObjFurniture1.h"
#include "ObjFurniture2.h"
#include "ObjFurniture3.h"
#include "ObjFurniture4.h"
#include "ObjFurniture5.h"
#include "ObjFurniture6.h"
#include "ObjFurnirure7.h"
#include "ObjFurniture8.h"
#include "ObjFurniture9.h"
#include "ObjFurniture10.h"



//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjMap6::Init()
{
	m_x = 0;
	m_y = 0;
	hon_x = 200;
	hon_y = 240;
	
	
	Hits::SetHitBox(this, m_x, m_y, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 1);
	Hits::SetHitBox(this, m_x += 200, m_y += 240, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);
}

//�A�N�V����
void CObjMap6::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr) {
		
	}
}

//�h���[
void CObjMap6::Draw()
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


	src.m_top = 32.0f;
	src.m_left = 64.0f;
	src.m_right = 32.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 110.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 110.0f + m_y;

	Draw::Draw(7, &src, &dst, c, 0.0f);

	src.m_top = 0.0f;
	src.m_left = 81.0f;
	src.m_right = 0.0f;
	src.m_bottom = 66.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 81.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 66.0f + m_y;

	Draw::Draw(8, &src, &dst, c, 0.0f);


	//�؂���ʒu�̐ݒ�
	/*
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 800.0f;
	src.m_bottom = 100.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 110.0f;

	//�`��
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//�{�I�����ѕ`��
	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 50.0f;
	src.m_bottom = 295.0f;
	dst.m_top = 240.0f;
	dst.m_left = 200.0f;
	dst.m_right = 250.0f;
	dst.m_bottom = 540.0f;

	//�`��
	Draw::Draw(10, &src, &dst, c, 0.0f);
	*/
}
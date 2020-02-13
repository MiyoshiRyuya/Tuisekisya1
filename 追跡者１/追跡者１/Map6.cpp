//����

//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "Map6.h"
#include "ObjHero.h"
#include "ObjEnemy.h"
#include "Objtrap.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

extern float g_Xz;
extern float g_Yz;

extern float genzaiti; //���ݒn

//�C�j�V�����C�Y
void CObjMap6::Init()
{
	m_x = 0;
	m_y = 0;
	hon_x = 200;
	hon_y = 240;
	
	//�I�u�W�F�N�g�̔z�u
	Hits::SetHitBox(this, m_x, m_y, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 1);//�ǎ�
	Hits::SetHitBox(this, m_x += 200, m_y += 240, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);//�{�I�@��
	Hits::SetHitBox(this, m_x += 200, m_y, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);//�{�I�@����
	Hits::SetHitBox(this, m_x += 200, m_y, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);//�{�I�@�E
	Hits::SetHitBox(this, m_x -= 600, m_y += 60, 64, 100, ELEMENT_WHITE, OBJ_MOVE1, 1);//Map6>Map5
}

//�A�N�V����
void CObjMap6::Action()
{

	genzaiti = 6;
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
	src.m_left = 512.0f;
	src.m_right = 1024.0f;
	src.m_bottom = 512.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	//�`��
	Draw::Draw(2, &src, &dst, c, 0.0f);

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 728.0f;
	src.m_bottom = 100.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 110.0f;

	//�`��
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 50.0f;
	src.m_bottom = 295.0f;

	//�{�I�����ѕ`��
	dst.m_top = 240.0f;
	dst.m_left = 200.0f;
	dst.m_right = 250.0f;
	dst.m_bottom = 540.0f;

	//�`��
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//�{�I������2�`��
	dst.m_top = 240.0f;
	dst.m_left = 400.0f;
	dst.m_right = 450.0f;
	dst.m_bottom = 540.0f;

	//�`��
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//�{�I������2�`��
	dst.m_top = 240.0f;
	dst.m_left = 600.0f;
	dst.m_right = 650.0f;
	dst.m_bottom = 540.0f;

	//�`��
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//�{�I������2�`��
	dst.m_top = 240.0f;
	dst.m_left = 600.0f;
	dst.m_right = 650.0f;
	dst.m_bottom = 540.0f;

	//�`��
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//�J�[�y�b�g�i�}�b�v�ړ��p�j
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 100.0f;
	src.m_bottom = 96.0f;
	dst.m_top = 300.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 400.0f;

	//�`��
	Draw::Draw(11, &src, &dst, c, 0.0f);

	//�֎q�`��1----------------------------------------
	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 200.0f+40 ;
	dst.m_left = 64.0f ;
	dst.m_right = 0.0f ;
	dst.m_bottom =264.0f +40;

	Draw::Draw(50, &src, &dst, c, 90.0f);

	dst.m_top = 400.0f;
	dst.m_left = 64.0f;
	dst.m_right = 0.0f;
	dst.m_bottom = 464.0f;

	Draw::Draw(50, &src, &dst, c, 90.0f);

	dst.m_top = 300.0f;
	dst.m_left = 64.0f+250;
	dst.m_right = 0.0f+250;
	dst.m_bottom = 364.0f;

	Draw::Draw(50, &src, &dst, c, -90.0f);

	dst.m_top = 0.0f+400;
	dst.m_left = 64.0f + 250;
	dst.m_right = 0.0f + 250;
	dst.m_bottom = 64.0f+400;

	Draw::Draw(50, &src, &dst, c, -90.0f);

	dst.m_top = 0.0f + 420;
	dst.m_left = 64.0f + 450;
	dst.m_right = 0.0f + 450;
	dst.m_bottom = 64.0f + 420;

	Draw::Draw(50, &src, &dst, c, -90.0f);

	dst.m_top = 0.0f + 100;
	dst.m_left = 64.0f + 100;
	dst.m_right = 0.0f + 100;
	dst.m_bottom = 64.0f + 100;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 100;
	dst.m_left = 64.0f + 300;
	dst.m_right = 0.0f + 300;
	dst.m_bottom = 64.0f + 100;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 100;
	dst.m_left = 64.0f + 500;
	dst.m_right = 0.0f + 500;
	dst.m_bottom = 64.0f + 100;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 100;
	dst.m_left = 64.0f + 700;
	dst.m_right = 0.0f + 700;
	dst.m_bottom = 64.0f + 100;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	src.m_top = 0.0f;
	src.m_left = 320.0f;
	src.m_right = 256.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f +100;
	dst.m_left = 320.0f -250;
	dst.m_right = 256.0f -250;
	dst.m_bottom = 64.0f +100;

	Draw::Draw(52, &src, &dst, c, 0.0f);

}
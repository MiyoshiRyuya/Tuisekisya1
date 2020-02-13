//����

//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "Map5.h"
#include "ObjHero.h"
#include "Objtrap.h"
#include "ObjEnemy.h"



//�g�p����l�[���X�y�[�X
using namespace GameL;

extern float genzaiti; //���ݒn

//�C�j�V�����C�Y
void CObjMap5::Init()
{
	m_x = 0;
	m_y = 0;
	m_xx = 0;
	m_yy = 0;

	Hits::SetHitBox(this, m_x, m_y, 340, 110, ELEMENT_GREEN, OBJ_MAP6, 1);//�ǎ��@��
	Hits::SetHitBox(this, m_x + 470, m_y + 220, 80, 80, ELEMENT_GREEN, OBJ_MAP6, 1);//�s�A�m�@�E
	Hits::SetHitBox(this, m_x + 270, m_y + 205, 80, 80, ELEMENT_GREEN, OBJ_MAP6, 1);//�s�A�m�@��

	
	Hits::SetHitBox(this, m_x + 250, m_y + 500, 60, 95, ELEMENT_GREEN, OBJ_MAP6, 1);//��
	Hits::SetHitBox(this, m_x + 480, m_y + 500, 60, 95, ELEMENT_GREEN, OBJ_MAP6, 1);//��

	Hits::SetHitBox(this, m_x += 736, m_y += 300, 64, 100, ELEMENT_WHITE, OBJ_MOVE2, 1);//Map5>6
	Hits::SetHitBox(this, m_x -= 736, m_y, 64, 100, ELEMENT_GREEN, OBJ_MOVE3, 1);//Map5>4
	Hits::SetHitBox(this, m_x += 465, m_y -= 300, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 1);//�ǎ��@�E
	Hits::SetHitBox(this, m_x -= 140, m_y += 550, 150, 50, ELEMENT_RED, OBJ_ESC, 1);//Map5>�E�o
	Hits::SetHitBox(this, m_x , m_y -= 550, 150, 10, ELEMENT_BLUE, OBJ_MOVE6, 1);//Map5>Map2
}

//�A�N�V����
void CObjMap5::Action()
{
	//���j���[��ʂ���Q�[����ʂɖ߂������A����Ɉʒu������������Ȃ��悤�ɂ���
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	genzaiti = 5;
}

//�h���[
void CObjMap5::Draw()
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

	//�J�[�y�b�g�i�}�b�v�ړ��p�j
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 100.0f;
	src.m_bottom = 96.0f;
	dst.m_top = 300.0f;
	dst.m_left = 800.0f;
	dst.m_right = 736.0f;
	dst.m_bottom = 400.0f;

	//�`��
	Draw::Draw(11, &src, &dst, c, 0.0f);

	//�J�[�y�b�g2�i�}�b�v�ړ��p�j
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 100.0f;
	src.m_bottom = 96.0f;
	dst.m_top = 300.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 400.0f;
	Draw::Draw(11, &src, &dst, c, 0.0f);

	//���֑O�̐Ώ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 96.0f;
	src.m_bottom = 144.0f;
	dst.m_top = 500.0f;
	dst.m_left = 250.0f;
	dst.m_right = 550.0f;
	dst.m_bottom = 600.0f;
	Draw::Draw(12, &src, &dst, c, 0.0f);



	//��
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 728.0f;
	src.m_bottom = 100.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 110.0f;

	//�`��
	Draw::Draw(9, &src, &dst, c, 0.0f);


	//�s�A�m	
	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 128.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + 210;
	dst.m_left = 0.0f + 470;
	dst.m_right = 100.0f + 470;
	dst.m_bottom = 100.0f + 210;

	Draw::Draw(52, &src, &dst, c, -90.0f);

	dst.m_top = 0.0f + 195;
	dst.m_left = 0.0f + 250;
	dst.m_right = 100.0f + 250;
	dst.m_bottom = 100.0f + 195;

	Draw::Draw(52, &src, &dst, c, 90.0f);

	
	//���P
	src.m_top = 0.0f;
	src.m_left = 190.0f;
	src.m_right = 128.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 500.0f + 5;
	dst.m_left = 296.0f + 30;
	dst.m_right = 228.0f;
	dst.m_bottom = 564.0f + 30 + 5;

	Draw::Draw(52, &src, &dst, c, 0.0f);
	//���Q
	dst.m_top = 500.0f + 5;
	dst.m_left = 526.0f + 30;
	dst.m_right = 458.0f;
	dst.m_bottom = 564.0f + 30 + 5;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//�O�~
	src.m_top = 0.0f;
	src.m_left = 256.0f;
	src.m_right = 192.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 240.0f;
	dst.m_left = 376.0f + 100;
	dst.m_right = 312.0f;
	dst.m_bottom = 304.0f + 100;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//�O�~
	src.m_top = 0.0f;
	src.m_left = 385.0f;
	src.m_right = 448.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f+110;
	dst.m_left = 0.0f +100;
	dst.m_right = 100.0f+100;
	dst.m_bottom = 100.0f + 110;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	dst.m_top = 0.0f + 510;
	dst.m_left = 0.0f + 100;
	dst.m_right = 100.0f + 100;
	dst.m_bottom = 100.0f + 510;

	Draw::Draw(52, &src, &dst, c, 0.0f);


	//���<<
	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 96.0f;
	dst.m_left = 96.0f;
	dst.m_right = 32.0f;
	dst.m_bottom = 32.0f;

	Draw::Draw(1, &src, &dst, c, 0.0f);
}
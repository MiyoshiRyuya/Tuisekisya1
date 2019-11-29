//�����Ƀ}�b�v�������Ă�������

//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "Map2.h"
#include"ObjHero.h"
#include"Objtrap.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

extern float genzaiti; //���ݒn

//�C�j�V�����C�Y
void CObjMap2::Init()
{
	m_x = 300;
	m_y = 100;
	Hits::SetHitBox(this, m_x , m_y , 50, 60, ELEMENT_NULL, OBJ_MAP6, 2);
	Hits::SetHitBox(this, m_x-200, m_y+10, 50, 60, ELEMENT_NULL, OBJ_MAP6, 2);

	ax = 730;
	ay = 530;
	Hits::SetHitBox(this, ax , ay , 64, 64, ELEMENT_BLUE, OBJ_MAP6, 2);

	kx = 0;
	ky = 200;
	Hits::SetHitBox(this, kx, ky, 64, 64, ELEMENT_NULL, OBJ_MAP6, 2);
	Hits::SetHitBox(this, kx-190, ky+10, 64, 64, ELEMENT_NULL, OBJ_MAP6, 2);

}

//�A�N�V����
void CObjMap2::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x , m_y );
	CHitBox*hito = Hits::GetHitBox(this);
	hito->SetPos(ax, ay);
	CHitBox*hitoo = Hits::GetHitBox(this);
	hito->SetPos(kx, ky);

	genzaiti = 2;
}

//�h���[
void CObjMap2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;
	//�֎q�`��1
	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 0.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	//�֎q�`��2
	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + 100;
	dst.m_right = 0.0f + 100;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(50, &src, &dst, c, 0.0f);

	//���`��
	dst.m_top = 0.0f + ay;
	dst.m_left = 64.0f + ax;
	dst.m_right = 0.0f + ax;
	dst.m_bottom = 64.0f + ay;

	Draw::Draw(51, &src, &dst, c, 0.0f);

	//�A�ؕ`��1
	dst.m_top = 0.0f + ky;
	dst.m_left = 64.0f + kx;
	dst.m_right = 0.0f + kx;
	dst.m_bottom = 64.0f + ky;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//�A�ؕ`��2
	dst.m_top = 0.0f + ky;
	dst.m_left = 64.0f + 100;
	dst.m_right = 0.0f + 100;
	dst.m_bottom = 64.0f + ky;

	Draw::Draw(52, &src, &dst, c, 0.0f);

	//�؂���ʒu�̐ݒ�

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

}
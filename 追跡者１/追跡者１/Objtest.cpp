//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"

#include"ObjHero.h"
#include "GameHead.h"
#include "ObjCloset.h"
#include "GameL\Audio.h"
#include"Objtest.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;
bool Memo3flag = false;
bool Textflag3 = false;
extern bool Memoflag2;
//�C�j�V�����C�Y
void CObjtest::Init()
{
	m_x = 20;
	m_y = 0;
	v_x = 0;
	v_y = 0;
	m_px = 0;
	m_py = 0;

	Hits::SetHitBox(this, m_x, m_y, 160, 130, ELEMENT_RED, OBJ_CLOSET, 11);
}



//�A�N�V����
void CObjtest::Action()
{

	//����2�擾���@���Ԃ�2�b�~�߂�
	if (Textflag3 == true)
	{
		Sleep(1500);
		this->SetStatus(false);   //���g�ɍ폜���߂��o���B
		//Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
	}

	if (Memoflag2 == true)
	{
		if (Input::GetVKey('Q') == true)
		{
			Audio::Start(3);

			Memo3flag = true;
			Textflag3 = true;
		}
	}
}


//�h���[
void CObjtest::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 256.0f;
	src.m_bottom = 256.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 64.0f;

	//�`��
	Draw::Draw(46, &src, &dst, c, 0.0f);

	if (Textflag3 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 180.0f;
		dst.m_left = 250.0f;
		dst.m_right = 536.0f;
		dst.m_bottom = 436.0f;

		Draw::Draw(45, &src, &dst, c, 0.0f);
	}
}
//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"
#include "SceneItem.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjEquipped.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjEquipped::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	m_x = 0.0f;
	m_y = 0.0f;
}

//�A�N�V����
void CObjEquipped::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 510 && m_mou_x < 680 && m_mou_y>440 && m_mou_y < 480)
	{
		//�}�E�X�̍��������ꂽ��A�C�e����ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneItem());
		}
	}


}

//�h���[
void CObjEquipped::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top    = 0.0f;
	src.m_left   = 0.0f;
	src.m_right  = 64.0f;
	src.m_bottom = 64.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 100.0f + m_y;
	dst.m_left = 110.0f + m_x;
	dst.m_right = 330.0f + m_x;
	dst.m_bottom = 320.0f + m_y;



	//������ʕ\��
	Font::StrDraw(L"�×܃X�v���[", 420, 100, 46, c);

	Font::StrDraw(L"�G�̓������O�b�ق�", 340, 150, 46, c);

	Font::StrDraw(L"�~�߂邱�Ƃ��ł���", 340, 200, 46, c);

	Font::StrDraw(L"�������Ȃ��Ǝg���Ȃ�", 340, 260, 46, c);
	//�������܂����\��
	Font::StrDraw(L"�������܂����H", 250, 350, 46, c);
	//�͂��@�������\��
	Font::StrDraw(L"�͂��@�@�@�@������", 130, 440, 64, c);

	//��Ԗڂɓo�^�����O���t�B�b�N��src.dst.c�̏������ɕ`��
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
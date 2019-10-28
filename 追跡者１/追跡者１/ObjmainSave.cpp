//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\DrawTexture.h"

#include "ObjSave1.h"
#include "GameHead.h"
#include "ObjmainSave.h"
#include "ObjSave2.h"
#include "ObjSave3.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjmainSave::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	m_time = 0;
}

//�A�N�V����
void CObjmainSave::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	m_time++;

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>190 && m_mou_y < 230)
	{
		//�}�E�X�̍��������ꂽ��Z�[�u�X���b�g1�Ɉړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneSave1());
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>300 && m_mou_y < 350)
	{
		//�}�E�X�̍��������ꂽ��Z�[�u�X���b�g2�Ɉړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneSave2());
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 230 && m_mou_x < 530 && m_mou_y>400 && m_mou_y < 460)
	{
		//�}�E�X�̍��������ꂽ��Z�[�u�X���b�g3�Ɉړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneSave3());
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>110 && m_mou_y < 150)
	{
		//�}�E�X�̍��������ꂽ�烁�j����ʂɈړ�����
		if (m_time % 10 == 0 && m_mou_l == true)
		{
			Scene::SetScene(new CSceneMenu());
		}
	}


}

//�h���[
void CObjmainSave::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	//���}�E�X�ʒu�\��
	wchar_t str[256];
	swprintf_s(str, L"x=%f,Y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	//���}�E�X�̃{�^���̏��
	if (m_mou_r == true)
		Font::StrDraw(L"R=�����Ă�", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=�����ĂȂ�", 20, 30, 12, c);

	if (m_mou_l == true)
		Font::StrDraw(L"L=�����Ă�", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=�����ĂȂ�", 20, 40, 12, c);

	Font::StrDraw(L"�Z�[�u���", 280, 100, 46, c);

	Font::StrDraw(L"�X���b�g1", 250, 180, 64, c);

	Font::StrDraw(L"�X���b�g2", 250, 290, 64, c);

	Font::StrDraw(L"�X���b�g3", 250, 400, 64, c);

	Font::StrDraw(L"��", 150, 100, 64, c);
}
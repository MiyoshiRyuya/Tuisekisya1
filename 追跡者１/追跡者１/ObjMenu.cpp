//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"
#include "SceneMain.h"
#include "SceneTitle.h"

#include "GameHead.h"
#include "ObjMenu.h"
#include "ObjItem.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjMenu::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
}

//�A�N�V����
void CObjMenu::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//E�{�^���������ƃQ�[����ʂɈړ�����
	if (Input::GetVKey('E') == true)
	{
		Scene::SetScene(new CSceneMain());
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 230 && m_mou_x < 510 && m_mou_y>240 && m_mou_y < 290)
	{
		//�}�E�X�̍��������ꂽ��A�C�e����ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneItem());
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 310 && m_mou_x < 500 && m_mou_y>340 && m_mou_y < 400)
	{
		//�}�E�X�̍��������ꂽ��Z�[�u��ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainSave());
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 130 && m_mou_x < 640 && m_mou_y>450 && m_mou_y < 510)
	{
		//�}�E�X�̍��������ꂽ��^�C�g����ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneTitle());
		}
	}

}

//�h���[
void CObjMenu::Draw()
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

	//���j���[��ʕ\��
	Font::StrDraw(L"MENU", 360, 100, 46, c);
	//�A�C�e����ʕ\��
	Font::StrDraw(L"�A�C�e��", 280, 230, 64, c);
	//�Z�[�u��ʕ\��
	Font::StrDraw(L"�Z�[�u", 310, 340, 64, c);
	//�^�C�g���ɖ߂��ʕ\��
	Font::StrDraw(L"�^�C�g���ɖ߂�", 180, 450, 64, c);
}
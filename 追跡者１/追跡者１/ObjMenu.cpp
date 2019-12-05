//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"
#include "SceneMain.h"
#include "SceneTitle.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjMenu.h"
#include "ObjItem.h"
#include "ObjHero.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

float genzaiti; //���ݒn

//�C�j�V�����C�Y
void CObjMenu::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
}

/*�C�j�V�����C�Y
void CObjHero::Init()
{
	m_px = g_Xz; //�ړ�
	m_py = g_Yz;
	m_vx;//�ړ��x�N�g��
	m_vy;
	m_hidari; //������
	m_ue; //��
	m_sita = 1; //��
	m_migi; //�E
	m_mos_x = 0.0f;
	m_mos_y = 0.0f;
	hitbo = 0; //HitBox�m�F�p
}*/

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
		if (genzaiti == 1)
			Scene::SetScene(new CSceneMain());
		else if (genzaiti == 2)
			Scene::SetScene(new CSceneMap2());
		else if (genzaiti == 3)
			Scene::SetScene(new CSceneMap3());
		else if (genzaiti == 4)
			Scene::SetScene(new CSceneMap4());
		else if (genzaiti == 5)
			Scene::SetScene(new CSceneMap5());
		else if (genzaiti == 6)
			Scene::SetScene(new CSceneMap6());
	}

	


	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 230 && m_mou_x < 510 && m_mou_y>240 && m_mou_y < 290)
	{
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

	//���j���[��ʕ\��
	Font::StrDraw(L"MENU", 360, 100, 46, c);
	//�A�C�e����ʕ\��
	Font::StrDraw(L"�A�C�e��", 280, 230, 64, c);
	//�Z�[�u��ʕ\��
	Font::StrDraw(L"�Z�[�u", 310, 340, 64, c);
	//�^�C�g���ɖ߂��ʕ\��
	Font::StrDraw(L"�^�C�g���ɖ߂�", 180, 450, 64, c);
}
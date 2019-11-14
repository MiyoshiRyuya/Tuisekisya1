//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include "ObjSave1.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;



//�C�j�V�����C�Y
void CObjSave1::Init()
{
	m_time = 0;
}

//�A�N�V����
void CObjSave1::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 520 && m_mou_x < 680 && m_mou_y>460 && m_mou_y < 510)
	{
		//�}�E�X�̍��������ꂽ��A�C�e����ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainSave());
		}
	}
}

//�h���[
void CObjSave1::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	Font::StrDraw(L"�Z�[�u���", 280, 100, 46, c);

	Font::StrDraw(L"�X���b�g1", 250, 180, 64, c);

	Font::StrDraw(L"�Z�[�u���܂����H", 150, 320, 64, c);

	Font::StrDraw(L"�͂��@�@�@�@������", 130, 460, 64, c);
}
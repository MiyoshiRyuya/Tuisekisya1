//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"

#include "GameHead.h"
#include"ObjSave3.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;



//�C�j�V�����C�Y
void CObjRoad3::Init()
{
	m_time = 0;
}

//�A�N�V����
void CObjRoad3::Action()
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
		//�}�E�X�̍��������ꂽ�烍�[�h��ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainRoad());
		}
	}
}

//�h���[
void CObjRoad3::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	Font::StrDraw(L"���[�h���", 280, 100, 46, c);

	Font::StrDraw(L"�X���b�g3", 250, 180, 64, c);

	Font::StrDraw(L"�v���C���ԕ\��", 250, 250, 64, c);

	Font::StrDraw(L"���[�h���܂����H", 150, 320, 64, c);

	Font::StrDraw(L"�͂��@�@�@�@������", 130, 460, 64, c);
}
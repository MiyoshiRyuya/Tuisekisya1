//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjItem.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjItem::Init()
{

}

//�A�N�V����
void CObjItem::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>110 && m_mou_y < 150)
	{
		//�}�E�X�̍��������ꂽ��A�C�e����ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneMenu());
		}
	}
}

//�h���[
void CObjItem::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	Font::StrDraw(L"�A�C�e��", 300, 100, 46, c);

	Font::StrDraw(L"�×܃X�v���[", 220, 220, 64, c);

	Font::StrDraw(L"�����������̌�", 190, 340, 64, c);

	Font::StrDraw(L"�\����", 300, 460, 64, c);

	Font::StrDraw(L"��", 150, 100, 64, c);
}
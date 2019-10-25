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
}

//�h���[
void CObjItem::Draw()
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

	Font::StrDraw(L"�A�C�e��", 300, 100, 46, c);

	Font::StrDraw(L"�×܃X�v���[", 220, 220, 64, c);

	Font::StrDraw(L"�����������̌�", 190, 340, 64, c);

	Font::StrDraw(L"�\����",300, 460, 64, c);
}
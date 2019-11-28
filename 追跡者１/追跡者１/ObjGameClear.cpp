//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawTexture.h"
#include "GameL\Audio.h"

#include "GameHead.h"
#include "ObjGameClear.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjGameClear::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
}

//�A�N�V����
void CObjGameClear::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//�}�E�X���N���b�N����������V�[�����C���Ɉڍs����
	if (m_mou_x > 0 && m_mou_x < 730 && m_mou_y>0 && m_mou_y < 600)
	{
		//�}�E�X�������ꂽ��^�C�g����ʂɈړ�
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneTitle());
		}
	}
}

//�h���[
void CObjGameClear::Draw()
{
	float c[4] = { 1,1,1,1 };



	RECT_F src;
	RECT_F dst;

	//�؂���ʒu
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;

	//�\���ʒu
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;


	

	Draw::Draw(10, &src, &dst, c, 0.0f);
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^
	Draw::LoadImage(L"GameClear.png", 10, TEX_SIZE_512);

	Font::StrDraw(L"Left-Click", 360, 510, 24, c);
}

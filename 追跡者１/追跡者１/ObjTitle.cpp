#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include "GameL\DrawTexture.h"
#include"GameL\DrawFont.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTitle.h"
#include"SceneMain.h"

using namespace GameL;

//�C�j�V�����C�Y
void CObjTitle::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
}

//�A�N�V����
void CObjTitle::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//�}�E�X�̃{�^���̏��
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();


	//�}�E�X���N���b�N����������V�[�����C���Ɉڍs����
	if (m_mou_x > 356 && m_mou_x < 445 && m_mou_y>345 && m_mou_y < 364)
	{
		
		//�}�E�X�������ꂽ��V�[�����C���Ɉړ�
		if (m_mou_l == true)
		{
			Audio::Start(1);
			Scene::SetScene(new CSceneMap5());
		}
	}

	/*/�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 355 && m_mou_x < 445 && m_mou_y>400 && m_mou_y < 420)
	{
		//�}�E�X�̍��������ꂽ�烍�[�h��ʂɈړ�����
		if (m_mou_l == true)
		{
			Scene::SetScene(new CScenemainRoad());
		}
	}*/

	//�R�}���h
}

//�h���[
void CObjTitle::Draw()
{
	float c[4] = { 1,1,1,1 };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 209.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 324.0f;
	src.m_bottom = 156.0f;
	dst.m_top = 100.0f;
	dst.m_left = 200.0f;
	dst.m_right = 524.0f;
	dst.m_bottom = 256.0f;
	Draw::Draw(1, &src, &dst, c, 0.0f);

	Font::StrDraw(L"GAME START", 360, 350, 23, c);
	//Font::StrDraw(L"CONTINUE", 360, 410, 23, c);
}

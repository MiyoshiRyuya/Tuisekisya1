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
	flag = false;
	time = 0;
}

//�A�N�V����
void CObjGameClear::Action()
{
	time++;

	if (time >= 10)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			flag = true;
		}
		if (flag == true)
		{
			if (Input::GetVKey(VK_RETURN) == false)
			{
				//Audio::Start(1);
				Scene::SetScene(new CSceneTitle());
			}
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
	//�O���O���t�B�b�N�t�@�C����ǂݍ���10�Ԗڂɓo�^
	Draw::LoadImage(L"GameClear.png", 10, TEX_SIZE_512);

	Font::StrDraw(L"Press Enter", 360, 510, 24, c);
}

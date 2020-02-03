#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\DrawFont.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjDesc.h"


using namespace GameL;

//�C�j�V�����C�Y
void CObjDesc::Init()
{
	flag = false;
}

//�A�N�V����
void CObjDesc::Action()
{
	time++;

	if (Input::GetVKey(VK_RETURN) == true)
	{
		flag = true;
	}
	if (time >= 10)
	{
		if (flag == true)
		{
			if (Input::GetVKey(VK_RETURN) == false)
			{
				Audio::Start(1);
				Scene::SetScene(new CSceneTitle());
			}
		}
	}
}

//�h���[
void CObjDesc::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"�������", 300, 40, 40, c);

	Font::StrDraw(L"W,A,S,D�L�[ �ړ�", 100, 100, 23, c);

	Font::StrDraw(L"Enter�L�[�@����A�A�C�e���l���A����ꏊ�ɓ���Ƃ��A�o��Ƃ�", 100, 140, 23, c);

	Font::StrDraw(L"Q�L�[�@    �A�C�e���l��", 100, 220, 23, c);

	Font::StrDraw(L"M�L�[      ���j���[��ʂ��J��", 100, 180, 23, c);


	Font::StrDraw(L"���j���[�������", 240, 280, 40, c);

	Font::StrDraw(L"W,S�L�[    �㉺�ړ�", 100, 340, 23, c);

	Font::StrDraw(L"A,D�L�[    ���E�ړ�", 100, 380, 23, c);

	Font::StrDraw(L"Enter�L�[�@����", 100, 420, 23, c);

	Font::StrDraw(L"Enter�L�[�Ń^�C�g���Ɉړ�", 100, 500, 23, c);
}

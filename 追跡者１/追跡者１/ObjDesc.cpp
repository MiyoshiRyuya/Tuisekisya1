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

	if (Input::GetVKey(VK_RETURN) == true)
	{
		flag = true;
	}
	if (flag == true)
	{
		if (Input::GetVKey(VK_RETURN) == false)
		{
			Audio::Start(1);
			Scene::SetScene(new CSceneTitle());
		}
	}

}

//�h���[
void CObjDesc::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"�������", 300, 40, 40, c);

	Font::StrDraw(L"W,A,S,D�L�[ �ړ�", 100, 100, 23, c);

	Font::StrDraw(L"Enter�L�[�@����A�A�C�e���l���A����ꏊ�ɓ��鎞", 100, 140, 23, c);

	Font::StrDraw(L"E�L�[  ����ꏊ����o�鎞", 100, 180, 23, c);

	Font::StrDraw(L"M�L�[    ���j���[��ʂ��J��", 100, 220, 23, c);


	Font::StrDraw(L"���j���[�������", 240, 320, 40, c);

	Font::StrDraw(L"W,S�L�[ �㉺�ړ�", 100, 380, 23, c);

	Font::StrDraw(L"A,D�L�[ ���E�ړ�", 100, 420, 23, c);

	Font::StrDraw(L"Enter�L�[�@����", 100, 460, 23, c);

	Font::StrDraw(L"Enter�L�[�Ń^�C�g���Ɉړ�", 100, 570, 23, c);
}

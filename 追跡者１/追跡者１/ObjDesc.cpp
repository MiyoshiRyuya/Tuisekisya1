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

}

//�A�N�V����
void CObjDesc::Action()
{
	/*if (Input::GetVKey(VK_RETURN) == true)
	{
		Audio::Start(1);
		Scene::SetScene(new CSceneTitle());
	}*/
}

//�h���[
void CObjDesc::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"W,A,S,D�L�[ �ړ�", 340, 300, 23, c);

	Font::StrDraw(L"E�L�[  ����ꏊ����o�鎞", 340, 330, 23, c);

	Font::StrDraw(L"M�L�[    ���j���[��ʂ��J��", 340, 360, 23, c);

	Font::StrDraw(L"Enter�L�[�@����A�A�C�e���l���A����ꏊ�ɓ��鎞", 340, 30, 23, c);
}

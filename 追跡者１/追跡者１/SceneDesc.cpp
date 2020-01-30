//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "GameHead.h"
#include"SceneDesc.h"



//�R���X�g���N�^
CSceneDesc::CSceneDesc()
{

}
//�f�X�g���N�^
CSceneDesc::~CSceneDesc()
{

}
//���������\�b�h
void CSceneDesc::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"ToukaMenu2.png", 0, TEX_SIZE_512);
	Draw::LoadImage(L"����.png", 1, TEX_SIZE_512);

	Draw::LoadImage(L"Tips.png", 2, TEX_SIZE_512);
	Draw::LoadImage(L"Tips3.png", 3, TEX_SIZE_512);


	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"MENU");
	Font::SetStrTex(L"�����A�C�e���m�F");
	Font::SetStrTex(L"�Q�[����ʂɖ߂�");
	Font::SetStrTex(L"�Q�[�����I������");
	Font::SetStrTex(L"��");
	Font::SetStrTex(L"�����A�C�e��������܂���");
	Font::SetStrTex(L"�\����");
	

	//���ʉ��ꗗ
	Audio::LoadAudio(1, L"menu2_cansel.wav", SOUND_TYPE::EFFECT);
	Audio::LoadAudio(2, L"menu2_idou.wav", SOUND_TYPE::EFFECT);
	Audio::LoadAudio(3, L"menu2_kettei.wav", SOUND_TYPE::EFFECT);
	Audio::LoadAudio(4, L"menyu.wav", SOUND_TYPE::EFFECT);


	//Menu2�I�u�W�F�N�g
	CObjDesc*obj_desc = new CObjDesc();
	Objs::InsertObj(obj_desc, OBJ_DESC, 1);
}
//���s�����\�b�h
void CSceneDesc::Scene()
{

}
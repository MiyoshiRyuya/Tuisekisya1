//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "GameHead.h"
#include"SceneMenu2.h"



//�R���X�g���N�^
CSceneMenu2::CSceneMenu2()
{

}
//�f�X�g���N�^
CSceneMenu2::~CSceneMenu2()
{

}
//���������\�b�h
void CSceneMenu2::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"ToukaMenu2.png", 0, TEX_SIZE_512);

	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"MENU");
	Font::SetStrTex(L"�����A�C�e���m�F");
	Font::SetStrTex(L"�Q�[����ʂɖ߂�");
	Font::SetStrTex(L"�Q�[�����I������");
	Font::SetStrTex(L"��");

	//Menu2�I�u�W�F�N�g
	CObjMenu2*obj_menu = new CObjMenu2();
	Objs::InsertObj(obj_menu, OBJ_MENU2, 1);
}
//���s�����\�b�h
void CSceneMenu2::Scene()
{

}
//STL�f�o�b�N�@�\��OFF�ɂ���B
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include"Scenemain.h"
#include"GameHead.h"
#include"SceneItem.h"

//�R���X�g���N�^
CSceneEquipped3::CSceneEquipped3()
{

}

//�f�X�g���N�^
CSceneEquipped3::~CSceneEquipped3()
{

}

//�Q�[�����C�����������\�b�h
void CSceneEquipped3::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�A�C�e������");

	//���j���[�I�u�W�F�N�g�쐬
	CObjEquipped3* obj = new CObjEquipped3();     //���j���[�I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_EQUIPPED3, 10); //��l���I�u�W�F�N�g�o�^
}

//�Q�[�����C�����s�����\�b�h
void CSceneEquipped3::Scene()
{

}
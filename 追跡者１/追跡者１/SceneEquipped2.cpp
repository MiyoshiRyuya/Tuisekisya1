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
#include"SceneEquipped2.h"

//�R���X�g���N�^
CSceneEquipped2::CSceneEquipped2()
{

}

//�f�X�g���N�^
CSceneEquipped2::~CSceneEquipped2()
{

}

//�Q�[�����C�����������\�b�h
void CSceneEquipped2::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�A�C�e������");

	//���j���[�I�u�W�F�N�g�쐬
	CObjEquipped2* obj = new CObjEquipped2();     //���j���[�I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_EQUIPPED2, 10); //��l���I�u�W�F�N�g�o�^

	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"sairyu.png", 1, TEX_SIZE_512);
}

//�Q�[�����C�����s�����\�b�h
void CSceneEquipped2::Scene()
{

}
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
CSceneEquipped::CSceneEquipped()
{

}

//�f�X�g���N�^
CSceneEquipped::~CSceneEquipped()
{

}

//�Q�[�����C�����������\�b�h
void CSceneEquipped::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�A�C�e������");

	//���j���[�I�u�W�F�N�g�쐬
	CObjEquipped* obj = new CObjEquipped();     //���j���[�I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_EQUIPPED, 10); //��l���I�u�W�F�N�g�o�^

	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"sairyu.png", 1, TEX_SIZE_512);
}

//�Q�[�����C�����s�����\�b�h
void CSceneEquipped::Scene()
{

}
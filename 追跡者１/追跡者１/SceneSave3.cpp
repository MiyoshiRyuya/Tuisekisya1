#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include"Scenemain.h"
#include"GameHead.h"
#include"SceneSave3.h"

//�R���X�g���N�^
CSceneSave3::CSceneSave3()
{

}

//�f�X�g���N�^
CSceneSave3::~CSceneSave3()
{

}

//�Q�[�����C�����������\�b�h
void CSceneSave3::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�Z�[�u���");

	//�Z�[�u��ʃI�u�W�F�N�g�쐬
	CObjSave3* obj = new CObjSave3();      //�Z�[�u��ʃI�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_SAVE3, 10);  //��l���I�u�W�F�N�g�o�^
}

//�Q�[�����C�����s�����\�b�h
void CSceneSave3::Scene()
{

}

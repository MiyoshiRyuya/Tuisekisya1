//STL�f�o�b�N�@�\��OFF�ɂ���B
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

//�R���X�g���N�^
CScenemainRoad::CScenemainRoad()
{

}

//�f�X�g���N�^
CScenemainRoad::~CScenemainRoad()
{

}

//�Q�[�����C�����������\�b�h
void CScenemainRoad::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�Z�[�u���");

	//�Z�[�u��ʃI�u�W�F�N�g�쐬
	CObjmainRoad* obj = new CObjmainRoad();      //�Z�[�u��ʃI�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_MAINROAD, 10);  //��l���I�u�W�F�N�g�o�^
}

//�Q�[�����C�����s�����\�b�h
void CScenemainRoad::Scene()
{

}
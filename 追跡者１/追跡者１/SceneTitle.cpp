//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneTitle::CSceneTitle()
{

}
//�f�X�g���N�^
CSceneTitle::~CSceneTitle()
{

}
//�Q�[�����C�����������\�b�h
void CSceneTitle::InitScene()
{
	

	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԗڂɓo�^(512*512)
	//Draw::LoadImage(L"Title.png", 1, TEX_SIZE_512);

	//�^�C�g���I�u�W�F�N�g�쐬
	CObjTitle*obj = new CObjTitle();//�^�C�g���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_TITLE, 10);//��l���I�u�W�F�N�g�o�^



}
//�Q�[�����C�����s�����\�b�h
void CSceneTitle::Scene()
{

}
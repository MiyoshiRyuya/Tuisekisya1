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
#include"Scenesolve.h"
#include"GameHead.h"


//�R���X�g���N�^
CScenesolve::CScenesolve()
{

}

//�f�X�g���N�^
CScenesolve::~CScenesolve()
{

}

//�Q�[�����C�����������\�b�h
void CScenesolve::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"Nazotoki.png", 1, TEX_SIZE_512);

	//�������ʕ\��
	CObjsolve*obj = new CObjsolve();
	Objs::InsertObj(obj, OBJ_SOLVE, 1);
}

//�Q�[�����C�����s�����\�b�h
void CScenesolve::Scene()
{

}
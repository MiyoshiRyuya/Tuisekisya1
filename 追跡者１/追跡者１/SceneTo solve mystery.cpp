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
#include"SceneTo solve mystery.h"

//�R���X�g���N�^
CSceneTosolvemystery::CSceneTosolvemystery()
{

}

//�f�X�g���N�^
CSceneTosolvemystery::~CSceneTosolvemystery()
{

}

//�Q�[�����C�����������\�b�h
void CSceneTosolvemystery::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"sairyu.png", 5, TEX_SIZE_512);
}

//�Q�[�����C�����s�����\�b�h
void CSceneTosolvemystery::Scene()
{

}
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
	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"sairyu.png", 5, TEX_SIZE_512);
}

//�Q�[�����C�����s�����\�b�h
void CSceneEquipped::Scene()
{

}
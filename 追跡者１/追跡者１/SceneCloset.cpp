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
#include"SceneCloset.h"
#include"GameHead.h"


//�R���X�g���N�^
CSceneCloset::CSceneCloset()
{

}

//�f�X�g���N�^
CSceneCloset::~CSceneCloset()
{

}

//�Q�[�����C�����������\�b�h
void CSceneCloset::InitScene()
{
	//�N���[�[�b�g�I�u�W�F�N�g
	CObjCloset*obj_closet = new CObjCloset();
	Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);
}

//�Q�[�����C�����s�����\�b�h
void CSceneCloset::Scene()
{

}
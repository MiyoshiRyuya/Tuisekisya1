//STL�f�o�b�N�@�\��OFF�ɂ���B
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include"Scenemain.h"
#include"GameHead.h"

//�R���X�g���N�^
CSceneItem::CSceneItem()
{

}

//�f�X�g���N�^
CSceneItem::~CSceneItem()
{

}

//�Q�[�����C�����������\�b�h
void CSceneItem::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�×܃X�v���[");

	//�A�C�e���I�u�W�F�N�g�쐬
	CObjItem* obj = new CObjItem();
	Objs::InsertObj(obj, OBJ_ITEM, 10);
}

//�Q�[�����C�����s�����\�b�h
void CSceneItem::Scene()
{

}

//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include"SceneMap4.h"

#include "ObjFurniture.h"
#include "ObjFurniture1.h"
#include "ObjFurniture2.h"
#include "ObjFurniture3.h"
#include "ObjFurniture4.h"
#include "ObjFurniture5.h"
#include "ObjFurniture6.h"
#include "ObjFurnirure7.h"
#include "ObjFurniture8.h"
#include "ObjFurniture9.h"
#include "ObjFurniture10.h"



//�R���X�g���N�^
CSceneMap4::CSceneMap4()
{

}
//�f�X�g���N�^
CSceneMap4::~CSceneMap4()
{

}
//���������\�b�h
void CSceneMap4::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�g���b�v�I�u�W�F�N�g
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԗڂɓo�^(64*64pixel)
	Draw::LoadImage(L"Horrorbear.png", 3, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���4�Ԗڂɓo�^
	Draw::LoadImage(L"Bookshelf.png", 4, TEX_SIZE_32);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���7�Ԗڂɓo�^
	Draw::LoadImage(L"Horrorbear.png", 7, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���8�Ԗڂɓo�^
	Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"SofaandTable.png", 9, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���10�Ԗڂɓo�^
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԗڂɓo�^
	Draw::LoadImage(L"SC-Candle.png", 11, TEX_SIZE_64);

}
//���s�����\�b�h
void CSceneMap4::Scene()
{

}
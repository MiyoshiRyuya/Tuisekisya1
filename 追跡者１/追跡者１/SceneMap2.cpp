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

#include "GameHead.h"
#include"SceneMap2.h"
#include "SceneMain.h"
#include "ObjFurniture.h"


//�R���X�g���N�^
CSceneMap2::CSceneMap2()
{

}
//�f�X�g���N�^
CSceneMap2::~CSceneMap2()
{

}
//���������\�b�h
void CSceneMap2::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	Draw::LoadImage(L"desk.png", 51, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�g���b�v�I�u�W�F�N�g
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 2);

	CObjMap2*obj_m2 = new CObjMap2();
	Objs::InsertObj(obj_m2, OBJ_MAP5, 2);

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);


	//���C���V�[���I�u�W�F�N�g
	//CObjMain*obj_main = new CObjMain();
	//Objs::InsertObj(obj_main, OBJ_MAIN, 2);

}
//���s�����\�b�h
void CSceneMap2::Scene()
{

}
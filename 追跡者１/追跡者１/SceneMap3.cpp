//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include"SceneMap3.h"
#include "ObjCloset.h"
#include<time.h>

//�R���X�g���N�^
CSceneMap3::CSceneMap3()
{

}
//�f�X�g���N�^
CSceneMap3::~CSceneMap3()
{

}
//���������\�b�h
void CSceneMap3::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^w
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"Closet1.png", 11, TEX_SIZE_64);
	//������q���g
	Draw::LoadImage(L"Tips2.png", 51, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 10);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	Draw::LoadImage(L"bed.png", 13, TEX_SIZE_64);

	Draw::LoadImage(L"SofaandTable.png", 14, TEX_SIZE_64);

	Draw::LoadImage(L"Tips2.png", 14, TEX_SIZE_64);

	//�g���b�v�I�u�W�F�N�g
	CObjtrap*obj_trap = new CObjtrap(542,292);
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);
	//�g���b�v�I�u�W�F�N�g
	CObjtrap1*obj_trap1 = new CObjtrap1(70, 550);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 1);

	//������q���g
	CObjFurniture44*obj_Furniture44 = new CObjFurniture44();
	Objs::InsertObj(obj_Furniture44, OBJ_FURNITURE44, 5);

	CObjCloset*obj_closet = new CObjCloset();
	Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap3*map3 = new CObjMap3();
	Objs::InsertObj(map3, OBJ_MAP3, 1);

	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
}
//���s�����\�b�h
void CSceneMap3::Scene()
{
	
}
//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneMain::CSceneMain()
{

}
//�f�X�g���N�^
CSceneMain::~CSceneMain()
{

}
//�Q�[�����C�����������\�b�h
void CSceneMain::InitScene()
{
	//�O���f�[�^�̓ǂݍ���(�X�e�[�W���)
	unique_ptr<wchar_t> p;//�X�e�[�W���|�C���^�[
	int size;//�X�e�[�W���̑傫��
	p = Save::ExternalDataOpen(L"stage01.csv", &size);//�O���f�[�^�ǂݍ���

	Font::SetStrTex(L"0123456789���b");

	int map[20][20];
	int count = 1;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int w = 0;
			swscanf_s(&p.get()[count], L"%d", &w);

			map[i][j] = w;
			count += 2;
		}
	}

	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);
	

	//Draw::LoadImage(L"�u���b�N.png",1,TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԗڂɓo�^(64*64pixel)
	Draw::LoadImage(L"Horrorbear.png", 3, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���4�Ԗڂɓo�^
	Draw::LoadImage(L"Bookshelf.png", 4, TEX_SIZE_32);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���7�Ԗڂɓo�^
	Draw::LoadImage(L"Horrorbear.png", 7, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���8�Ԗڂɓo�^
	Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);

	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	CObjstage*objb = new CObjstage(map);
	Objs::InsertObj(objb, OBJ_STAGE, 9);

	//�G�I�u�W�F�N�g
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);

	//㩃I�u�W�F�N�g�쐬
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//�Ƌ�I�u�W�F�N�g�쐬
	CObjFurniture*obj_Furnirure = new CObjFurniture();
	Objs::InsertObj(obj_Furnirure, OBJ_FURNITURE,1);

	//�Ƌ�I�u�W�F�N�g1�쐬
	CObjFurniture1*obj_Furnirure1 = new CObjFurniture1();
	Objs::InsertObj(obj_Furnirure1, OBJ_FURNITURE1, 1);

	//�Ƌ�I�u�W�F�N�g2�쐬
	CObjFurniture2*obj_Furnirure2 = new CObjFurniture2();
	Objs::InsertObj(obj_Furnirure2, OBJ_FURNITURE2, 1);

	//�Ƌ�I�u�W�F�N�g3�쐬
	//CObjFurniture3*obj_Furnirure3 = new CObjFurniture3();
	//Objs::InsertObj(obj_Furnirure3, OBJ_FURNITURE3, 1);

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	//�}�b�v�w�i�I�u�W�F�N�g2�쐬

	CObjMap2*obj_m = new CObjMap2();
	Objs::InsertObj(obj_m, OBJ_MAP2, 2);

	//block�I�u�W�F�N�g�쐬
	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE,9);
}
//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{

}
//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\HitBoxManager.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include<time.h>

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

	x = 0;
	y = 0;
	Hits::SetHitBox(this, x =- 10, y +=250, 80, 120, ELEMENT_RED, OBJ_MOVE12, 1);


	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
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

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"SofaandTable.png", 9, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���10�Ԗڂɓo�^
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԗڂɓo�^
	Draw::LoadImage(L"SC-Candle.png", 11, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���12�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"KitchenFloor.png", 12, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԗڂɓo�^
	Draw::LoadImage(L"bed.png", 13, TEX_SIZE_64);







	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);



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
	CObjFurniture3*obj_Furnirure3 = new CObjFurniture3();
	Objs::InsertObj(obj_Furnirure3, OBJ_FURNITURE3, 1);

	//�Ƌ�I�u�W�F�N�g4�쐬
	CObjFurniture4*obj_Furnirure4 = new CObjFurniture4();
	Objs::InsertObj(obj_Furnirure4, OBJ_FURNITURE4, 1);

	//�Ƌ�I�u�W�F�N�g5�쐬
	CObjFurniture5*obj_Furnirure5 = new CObjFurniture5();
	Objs::InsertObj(obj_Furnirure5, OBJ_FURNITURE5, 1);

	//�Ƌ�I�u�W�F�N�g6�쐬
	CObjFurniture6*obj_Furnirure6 = new CObjFurniture6();
	Objs::InsertObj(obj_Furnirure6, OBJ_FURNITURE6, 1);

	//�Ƌ�I�u�W�F�N�g7�쐬
	CObjFurniture7*obj_Furnirure7 = new CObjFurniture7();
	Objs::InsertObj(obj_Furnirure7, OBJ_FURNITURE7, 1);

	//�Ƌ�I�u�W�F�N�g8�쐬
	CObjFurniture8*obj_Furnirure8 = new CObjFurniture8();
	Objs::InsertObj(obj_Furnirure8, OBJ_FURNITURE8, 1);

	//�Ƌ�I�u�W�F�N�g9�쐬
	CObjFurniture9*obj_Furnirure9 = new CObjFurniture9();
	Objs::InsertObj(obj_Furnirure9, OBJ_FURNITURE9, 1);

	//�Ƌ�I�u�W�F�N�g10�쐬
	CObjFurniture10*obj_Furnirure10 = new CObjFurniture10();
	Objs::InsertObj(obj_Furnirure10, OBJ_FURNITURE10, 1);

	

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	//�}�b�v�w�i�I�u�W�F�N�g2�쐬
	//CObjMap6*obj_m6 = new CObjMap6();
	//Objs::InsertObj(obj_m6, OBJ_MAP6, 2);

	//block�I�u�W�F�N�g�쐬
	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE,9);
}
//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{

}
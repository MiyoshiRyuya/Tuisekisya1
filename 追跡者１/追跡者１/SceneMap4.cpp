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
#include"SceneMap4.h"



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

	//���y���̓ǂݍ���
	Audio::LoadAudio(0, L"bgm_noroi.wav", SOUND_TYPE::BACK_MUSIC);


	//�o�b�N�~���[�W�b�N�X�^�[�g
	float Volume = Audio::VolumeMaster(-0.0f); //�}�X�^�[�{�����[���������Ȃ�
	Audio::Start(0); //���y�X�^�[�g



	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);


	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"KitchenFloorEX.png", 2, TEX_SIZE_512);

	

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);


	//�O���O���t�B�b�N�t�@�C����ǂݍ���10�Ԗڂɓo�^
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԗڂɓo�^
	Draw::LoadImage(L"SC-Candle.png", 11, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���12�Ԗڂɓo�^
	Draw::LoadImage(L"KitChen1.png", 12, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���13�Ԗڂɓo�^
	Draw::LoadImage(L"KitchenTable1.png", 13, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���14�Ԗڂɓo�^
	Draw::LoadImage(L"KitchenTable2.png", 14, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���15�Ԗڂɓo�^
	Draw::LoadImage(L"Brain.png", 15, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���16�Ԗڂɓo�^
	Draw::LoadImage(L"Heart.png", 16, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���17�Ԗڂɓo�^
	Draw::LoadImage(L"Cake.png", 17, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���18�Ԗڂɓo�^
	Draw::LoadImage(L"Nabe1.png", 18, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���19�Ԗڂɓo�^
	Draw::LoadImage(L"Cake1.png", 19, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���20�Ԗڂɓo�^
	Draw::LoadImage(L"Meat.png", 20, TEX_SIZE_64);
	
	//�O���O���t�B�b�N�t�@�C����ǂݍ���21�Ԗڂɓo�^
	Draw::LoadImage(L"Mom.png", 21, TEX_SIZE_64);
	
	//�O���O���t�B�b�N�t�@�C����ǂݍ���22�Ԗڂɓo�^
	Draw::LoadImage(L"Nabe2.png", 22, TEX_SIZE_64);






	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);

	//�G�I�u�W�F�N�g
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);

	//CObjMap4*map4 = new CObjMap4();
	//Objs::InsertObj(map4, OBJ_MAP4, 0);

	



	
	
	
	
	//�Ƌ�I�u�W�F�N�g11�쐬
	CObjFurniture11*obj_Furnirure11 = new CObjFurniture11();
	Objs::InsertObj(obj_Furnirure11, OBJ_FURNITURE11, 1);

	//�Ƌ�I�u�W�F�N�g12�쐬
	CObjFurniture12*obj_Furnirure12 = new CObjFurniture12();
	Objs::InsertObj(obj_Furnirure12, OBJ_FURNITURE12, 1);

	//�Ƌ�I�u�W�F�N�g13�쐬
	CObjFurniture13*obj_Furnirure13 = new CObjFurniture13();
	Objs::InsertObj(obj_Furnirure13, OBJ_FURNITURE13, 1);

	//�Ƌ�I�u�W�F�N�g14�쐬
	CObjFurniture14*obj_Furnirure14 = new CObjFurniture14();
	Objs::InsertObj(obj_Furnirure14, OBJ_FURNITURE14, 2);

	//�Ƌ�I�u�W�F�N�g15�쐬
	CObjFurniture15*obj_Furnirure15 = new CObjFurniture15();
	Objs::InsertObj(obj_Furnirure15, OBJ_FURNITURE15, 2);

	//�Ƌ�I�u�W�F�N�g16�쐬
	CObjFurniture16*obj_Furnirure16 = new CObjFurniture16();
	Objs::InsertObj(obj_Furnirure16, OBJ_FURNITURE16, 1);

	//�Ƌ�I�u�W�F�N�g17�쐬
	CObjFurniture17*obj_Furnirure17 = new CObjFurniture17();
	Objs::InsertObj(obj_Furnirure17, OBJ_FURNITURE17, 1);

	//�Ƌ�I�u�W�F�N�g18�쐬
	CObjFurniture18*obj_Furnirure18 = new CObjFurniture18();
	Objs::InsertObj(obj_Furnirure18, OBJ_FURNITURE18, 1);

	//�Ƌ�I�u�W�F�N�g19�쐬
	CObjFurniture19*obj_Furnirure19 = new CObjFurniture19();
	Objs::InsertObj(obj_Furnirure19, OBJ_FURNITURE19, 1);

	//�Ƌ�I�u�W�F�N�g20�쐬
	CObjFurniture20*obj_Furnirure20 = new CObjFurniture20();
	Objs::InsertObj(obj_Furnirure20, OBJ_FURNITURE20, 1);

	//�Ƌ�I�u�W�F�N�g21�쐬
	CObjFurniture21*obj_Furnirure21 = new CObjFurniture21();
	Objs::InsertObj(obj_Furnirure21, OBJ_FURNITURE21, 1);

	//�Ƌ�I�u�W�F�N�g22�쐬
	CObjFurniture22*obj_Furnirure22 = new CObjFurniture22();
	Objs::InsertObj(obj_Furnirure22, OBJ_FURNITURE22, 1);

	//�Ƌ�I�u�W�F�N�g23�쐬
	CObjFurniture23*obj_Furnirure23 = new CObjFurniture23();
	Objs::InsertObj(obj_Furnirure23, OBJ_FURNITURE23, 1);

	//�Ƌ�I�u�W�F�N�g24�쐬
	CObjFurniture24*obj_Furnirure24 = new CObjFurniture24();
	Objs::InsertObj(obj_Furnirure24, OBJ_FURNITURE24, 2);

	//�Ƌ�I�u�W�F�N�g25�쐬
	CObjFurniture25*obj_Furnirure25 = new CObjFurniture25();
	Objs::InsertObj(obj_Furnirure25, OBJ_FURNITURE25, 2);

	//�Ƌ�I�u�W�F�N�g26�쐬
	CObjFurniture26*obj_Furnirure26 = new CObjFurniture26();
	Objs::InsertObj(obj_Furnirure26, OBJ_FURNITURE26, 2);

	//�Ƌ�I�u�W�F�N�g27�쐬
	CObjFurniture27*obj_Furnirure27 = new CObjFurniture27();
	Objs::InsertObj(obj_Furnirure27, OBJ_FURNITURE27, 2);

	//�Ƌ�I�u�W�F�N�g28�쐬
	CObjFurniture28*obj_Furnirure28 = new CObjFurniture28();
	Objs::InsertObj(obj_Furnirure28, OBJ_FURNITURE28, 2);

	//�Ƌ�I�u�W�F�N�g29�쐬
	CObjFurniture29*obj_Furnirure29 = new CObjFurniture29();
	Objs::InsertObj(obj_Furnirure29, OBJ_FURNITURE29, 2);

	//�Ƌ�I�u�W�F�N�g30�쐬
	CObjFurniture30*obj_Furnirure30 = new CObjFurniture30();
	Objs::InsertObj(obj_Furnirure30, OBJ_FURNITURE30, 2);

	//�Ƌ�I�u�W�F�N�g31�쐬
	CObjFurniture31*obj_Furnirure31 = new CObjFurniture31();
	Objs::InsertObj(obj_Furnirure31, OBJ_FURNITURE31, 2);

	//�Ƌ�I�u�W�F�N�g32�쐬
	CObjFurniture32*obj_Furnirure32 = new CObjFurniture32();
	Objs::InsertObj(obj_Furnirure32, OBJ_FURNITURE31, 1);

	//�Ƌ�I�u�W�F�N�g33�쐬
	CObjFurniture33*obj_Furnirure33 = new CObjFurniture33();
	Objs::InsertObj(obj_Furnirure33, OBJ_FURNITURE31, 2);

	//�Ƌ�I�u�W�F�N�g34�쐬
	CObjFurniture34*obj_Furnirure34 = new CObjFurniture34();
	Objs::InsertObj(obj_Furnirure34, OBJ_FURNITURE34, 2);








	//�}�b�v�w�i�I�u�W�F�N�g4�쐬
	CObjMap4*obj_map4 = new CObjMap4();
	Objs::InsertObj(obj_map4, OBJ_MAP4, 1);

}
//���s�����\�b�h
void CSceneMap4::Scene()
{

}
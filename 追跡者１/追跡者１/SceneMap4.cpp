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


	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"KitchenFloorEX.png", 2, TEX_SIZE_512);

	

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);



	

	//�O���O���t�B�b�N�t�@�C����ǂݍ���8�Ԗڂɓo�^
	//Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);


	

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


	

	






	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);

	//�G�I�u�W�F�N�g
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);



	/*
	//㩃I�u�W�F�N�g�쐬
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//㩃I�u�W�F�N�g1�쐬
	CObjtrap1*obj_trap1 = new CObjtrap1();
	Objs::InsertObj(obj_trap1, OBJ_TRAP1, 1);

	//㩃I�u�W�F�N�g2�쐬
	CObjtrap2*obj_trap2 = new CObjtrap2();
	Objs::InsertObj(obj_trap2, OBJ_TRAP2, 1);

	//㩃I�u�W�F�N�g3�쐬
	CObjtrap3*obj_trap3 = new CObjtrap3();
	Objs::InsertObj(obj_trap3, OBJ_TRAP3, 1);
	*/



	
	//�Ƌ�I�u�W�F�N�g�쐬
	
	/*
	//�Ƌ�I�u�W�F�N�g7�쐬
	CObjFurniture7*obj_Furnirure7 = new CObjFurniture7();/////
	Objs::InsertObj(obj_Furnirure7, OBJ_FURNITURE7, 1);
	
	//�Ƌ�I�u�W�F�N�g8�쐬
	CObjFurniture8*obj_Furnirure8 = new CObjFurniture8();/////
	Objs::InsertObj(obj_Furnirure8, OBJ_FURNITURE8, 1);
	*/
	
	
	
	
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



	//�}�b�v�w�i�I�u�W�F�N�g4�쐬
	CObjMap4*obj_map4 = new CObjMap4();
	Objs::InsertObj(obj_map4, OBJ_MAP4, 1);

}
//���s�����\�b�h
void CSceneMap4::Scene()
{

}
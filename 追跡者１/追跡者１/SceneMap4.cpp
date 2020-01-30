//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"
#include<time.h>


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
	

	//�h�A�̌��ʉ�
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	Audio::Start(1);



	//����1���莞��SE
	Audio::LoadAudio(3, L"itemgetseb .wav", SOUND_TYPE::EFFECT);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);


	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"KitchenFloorEX.png", 2, TEX_SIZE_512);

	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԗڂɓo�^
	Draw::LoadImage(L"ImomushiEnemy.png", 4, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���10�Ԗڂɓo�^
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԗڂɓo�^
	Draw::LoadImage(L"SC-Candle.png", 11, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���
	Draw::LoadImage(L"��.png", 30, TEX_SIZE_64);

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

	//�O���O���t�B�b�N�t�@�C����ǂݍ���23�Ԗڂɓo�^
	Draw::LoadImage(L"Hukuro.png", 23, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���24�Ԗڂɓo�^
	Draw::LoadImage(L"Meat2.png", 24, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���25�Ԗڂɓo�^
	Draw::LoadImage(L"Meat3.png", 25, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���26�Ԗڂɓo�^
	Draw::LoadImage(L"Knife1.png", 26, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���50�Ԃɓo�^�i������q���g
	Draw::LoadImage(L"Tips.png", 50, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���49�Ԃɓo�^�i������q���g
	Draw::LoadImage(L"Tips.png", 49, TEX_SIZE_64);

	//���������
	Draw::LoadImage(L"Text1.png", 35, TEX_SIZE_64);

	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 100);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);

	//�G�I�u�W�F�N�g
	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 50);
	}
	
	//������I�u�W�F�N�g�쐬
	CObjTips1*obj_Tips1 = new CObjTips1();
	Objs::InsertObj(obj_Tips1, OBJ_TIPS1, 50);

	
	//�g���b�v�I�u�W�F�N�g�쐬
	CObjtrap*obj_trap = new CObjtrap(128, 188);
	Objs::InsertObj(obj_trap, OBJ_TRAP, 10);

	//�Ƌ�I�u�W�F�N�g11�쐬
	CObjFurniture11*obj_Furnirure11 = new CObjFurniture11();
	Objs::InsertObj(obj_Furnirure11, OBJ_FURNITURE11, 10);

	//�Ƌ�I�u�W�F�N�g12�쐬
	CObjFurniture12*obj_Furnirure12 = new CObjFurniture12();
	Objs::InsertObj(obj_Furnirure12, OBJ_FURNITURE12, 10);

	//�Ƌ�I�u�W�F�N�g13�쐬
	CObjFurniture13*obj_Furnirure13 = new CObjFurniture13();
	Objs::InsertObj(obj_Furnirure13, OBJ_FURNITURE13, 10);

	//�Ƌ�I�u�W�F�N�g14�쐬
	CObjFurniture14*obj_Furnirure14 = new CObjFurniture14();
	Objs::InsertObj(obj_Furnirure14, OBJ_FURNITURE14, 20);

	//�Ƌ�I�u�W�F�N�g15�쐬
	CObjFurniture15*obj_Furnirure15 = new CObjFurniture15();
	Objs::InsertObj(obj_Furnirure15, OBJ_FURNITURE15, 20);

	//�Ƌ�I�u�W�F�N�g16�쐬
	CObjFurniture16*obj_Furnirure16 = new CObjFurniture16();
	Objs::InsertObj(obj_Furnirure16, OBJ_FURNITURE16, 10);

	//�Ƌ�I�u�W�F�N�g17�쐬
	CObjFurniture17*obj_Furnirure17 = new CObjFurniture17();
	Objs::InsertObj(obj_Furnirure17, OBJ_FURNITURE17, 10);

	//�Ƌ�I�u�W�F�N�g18�쐬
	CObjFurniture18*obj_Furnirure18 = new CObjFurniture18();
	Objs::InsertObj(obj_Furnirure18, OBJ_FURNITURE18, 10);

	//�Ƌ�I�u�W�F�N�g19�쐬
	CObjFurniture19*obj_Furnirure19 = new CObjFurniture19();
	Objs::InsertObj(obj_Furnirure19, OBJ_FURNITURE19, 10);

	//�Ƌ�I�u�W�F�N�g20�쐬
	CObjFurniture20*obj_Furnirure20 = new CObjFurniture20();
	Objs::InsertObj(obj_Furnirure20, OBJ_FURNITURE20, 10);

	//�Ƌ�I�u�W�F�N�g21�쐬
	CObjFurniture21*obj_Furnirure21 = new CObjFurniture21();
	Objs::InsertObj(obj_Furnirure21, OBJ_FURNITURE21, 10);

	//�Ƌ�I�u�W�F�N�g22�쐬
	CObjFurniture22*obj_Furnirure22 = new CObjFurniture22();
	Objs::InsertObj(obj_Furnirure22, OBJ_FURNITURE22, 10);

	//�Ƌ�I�u�W�F�N�g23�쐬
	CObjFurniture23*obj_Furnirure23 = new CObjFurniture23();
	Objs::InsertObj(obj_Furnirure23, OBJ_FURNITURE23, 10);

	//�Ƌ�I�u�W�F�N�g24�쐬
	CObjFurniture24*obj_Furnirure24 = new CObjFurniture24();
	Objs::InsertObj(obj_Furnirure24, OBJ_FURNITURE24, 20);

	//�Ƌ�I�u�W�F�N�g25�쐬
	CObjFurniture25*obj_Furnirure25 = new CObjFurniture25();
	Objs::InsertObj(obj_Furnirure25, OBJ_FURNITURE25, 20);

	//�Ƌ�I�u�W�F�N�g26�쐬
	CObjFurniture26*obj_Furnirure26 = new CObjFurniture26();
	Objs::InsertObj(obj_Furnirure26, OBJ_FURNITURE26, 20);

	//�Ƌ�I�u�W�F�N�g27�쐬
	CObjFurniture27*obj_Furnirure27 = new CObjFurniture27();
	Objs::InsertObj(obj_Furnirure27, OBJ_FURNITURE27, 20);

	//�Ƌ�I�u�W�F�N�g28�쐬
	CObjFurniture28*obj_Furnirure28 = new CObjFurniture28();
	Objs::InsertObj(obj_Furnirure28, OBJ_FURNITURE28, 20);

	//�Ƌ�I�u�W�F�N�g29�쐬
	CObjFurniture29*obj_Furnirure29 = new CObjFurniture29();
	Objs::InsertObj(obj_Furnirure29, OBJ_FURNITURE29, 20);

	//�Ƌ�I�u�W�F�N�g30�쐬
	CObjFurniture30*obj_Furnirure30 = new CObjFurniture30();
	Objs::InsertObj(obj_Furnirure30, OBJ_FURNITURE30, 20);

	//�Ƌ�I�u�W�F�N�g31�쐬
	CObjFurniture31*obj_Furnirure31 = new CObjFurniture31();
	Objs::InsertObj(obj_Furnirure31, OBJ_FURNITURE31, 20);

	//�Ƌ�I�u�W�F�N�g32�쐬
	CObjFurniture32*obj_Furnirure32 = new CObjFurniture32();
	Objs::InsertObj(obj_Furnirure32, OBJ_FURNITURE31, 10);

	//�Ƌ�I�u�W�F�N�g33�쐬
	CObjFurniture33*obj_Furnirure33 = new CObjFurniture33();
	Objs::InsertObj(obj_Furnirure33, OBJ_FURNITURE31, 20);

	//�Ƌ�I�u�W�F�N�g34�쐬
	CObjFurniture34*obj_Furnirure34 = new CObjFurniture34();
	Objs::InsertObj(obj_Furnirure34, OBJ_FURNITURE34, 20);

	//�Ƌ�I�u�W�F�N�g35�쐬
	CObjFurniture35*obj_Furnirure35 = new CObjFurniture35();
	Objs::InsertObj(obj_Furnirure35, OBJ_FURNITURE35, 10);

	//�Ƌ�I�u�W�F�N�g36�쐬
	CObjFurniture36*obj_Furnirure36 = new CObjFurniture36();
	Objs::InsertObj(obj_Furnirure36, OBJ_FURNITURE36, 10);

	//�Ƌ�I�u�W�F�N�g37�쐬
	CObjFurniture37*obj_Furnirure37 = new CObjFurniture37();
	Objs::InsertObj(obj_Furnirure37, OBJ_FURNITURE37, 10);

	//�Ƌ�I�u�W�F�N�g38�쐬
	CObjFurniture38*obj_Furnirure38 = new CObjFurniture38();
	Objs::InsertObj(obj_Furnirure38, OBJ_FURNITURE38, 10);

	//�Ƌ�I�u�W�F�N�g39�쐬
	CObjFurniture39*obj_Furnirure39 = new CObjFurniture39();
	Objs::InsertObj(obj_Furnirure39, OBJ_FURNITURE39, 10);

	//�Ƌ�I�u�W�F�N�g40�쐬
	CObjFurniture40*obj_Furnirure40 = new CObjFurniture40();
	Objs::InsertObj(obj_Furnirure40, OBJ_FURNITURE40, 20);

	//�Ƌ�I�u�W�F�N�g41�쐬
	CObjFurniture41*obj_Furnirure41 = new CObjFurniture41();
	Objs::InsertObj(obj_Furnirure41, OBJ_FURNITURE41, 20);

	//�Ƌ�I�u�W�F�N�g42�쐬
	CObjFurniture42*obj_Furnirure42 = new CObjFurniture42();
	Objs::InsertObj(obj_Furnirure42, OBJ_FURNITURE42, 20);

	//�Ƌ�I�u�W�F�N�g43�쐬
	CObjFurniture43*obj_Furnirure43 = new CObjFurniture43();
	Objs::InsertObj(obj_Furnirure43, OBJ_FURNITURE43, 20);




	//�}�b�v�w�i�I�u�W�F�N�g4�쐬
	CObjMap4*obj_map4 = new CObjMap4();
	Objs::InsertObj(obj_map4, OBJ_MAP4, 10);

}
//���s�����\�b�h
void CSceneMap4::Scene()
{

}
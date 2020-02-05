//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\HitBoxManager.h"
#include "GameL\Audio.h"


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

	Audio::LoadAudio(0, L"desperate .wav", SOUND_TYPE::BACK_MUSIC);
	Audio::LoadAudio(1, L"itemgetseb.wav", EFFECT);
	Audio::LoadAudio(2, L"memai2 (online-audio-converter.com).wav", SOUND_TYPE::BACK_MUSIC);
	//�o�b�N�~���[�W�b�N�X�^�[�g
	float Volume2 = Audio::Volume(0.0f, 2); //�{�����[���������Ȃ�

	float Volume = Audio::Volume(0.0f,0); //�{�����[���������Ȃ�
	Audio::Start(0); //���y�X�^�[�g



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
	Hits::SetHitBox(this, x =770, y +=250, 80, 120, ELEMENT_RED, OBJ_MOVE11, 1);


	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 4);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		Audio::Stop(0);//�G���o�������0�Ԃ��~��
		Audio::Start(2);//2�Ԃ��X�^�[�g�����

		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

	//�h�A�̌��ʉ�
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::Volume(1.0f,1);
	//Audio::Start(1);

	


	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);
	
	//Draw::LoadImage(L"�u���b�N.png",1,TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 16, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 13, TEX_SIZE_512);

	Draw::LoadImage(L"kagus.png", 15, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"SofaandTable.png", 9, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���10�Ԗڂɓo�^
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);



	//�Ƌ�I�u�W�F�N�g4�쐬
	CObjFurniture4*obj_Furnirure4 = new CObjFurniture4();
	Objs::InsertObj(obj_Furnirure4, OBJ_FURNITURE4, 3);

	//�Ƌ�I�u�W�F�N�g5�쐬
	CObjFurniture5*obj_Furnirure5 = new CObjFurniture5();
	Objs::InsertObj(obj_Furnirure5, OBJ_FURNITURE5, 3);

	//�Ƌ�I�u�W�F�N�g9�쐬
	CObjFurniture9*obj_Furnirure9 = new CObjFurniture9();
	Objs::InsertObj(obj_Furnirure9, OBJ_FURNITURE9, 3);

	//�Ƌ�I�u�W�F�N�g10�쐬
	CObjFurniture10*obj_Furnirure10 = new CObjFurniture10();
	Objs::InsertObj(obj_Furnirure10, OBJ_FURNITURE10, 3);

	
	//�g���b�v�I�u�W�F�N�g
	CObjtrap3*obj_trap1 = new CObjtrap3(170, 50);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 4);

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	//�}�b�v�w�i�I�u�W�F�N�g2�쐬
	CObjMain*obj_main = new CObjMain();
	Objs::InsertObj(obj_main, OBJ_MAIN, 2);


}
//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{

}
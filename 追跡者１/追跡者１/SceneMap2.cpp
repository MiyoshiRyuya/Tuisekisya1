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

#include "GameHead.h"
#include"SceneMap2.h"
#include "SceneMain.h"
#include "ObjFurniture.h"
#include<time.h>

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
	Audio::LoadAudio(0, L"amenisuteraretaningyou.wav", SOUND_TYPE::BACK_MUSIC);
	Audio::LoadAudio(2, L"memai2 (online-audio-converter.com).wav", SOUND_TYPE::BACK_MUSIC);


	//�o�b�N�~���[�W�b�N�X�^�[�g
	float Volume2 = Audio::Volume(0.0f, 2); //�{�����[���������Ȃ�

	float Volume = Audio::Volume(-0.0f,0); //�}�X�^�[�{�����[���������Ȃ�
	Audio::Start(0); //���y�X�^�[�g

	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	//Audio::Start(1);

	//����2���莞��SE
	Audio::LoadAudio(3, L"itemgetseb .wav", SOUND_TYPE::EFFECT);

	//����2���莞��SE
	Audio::LoadAudio(6, L"poison.wav", SOUND_TYPE::EFFECT);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���31�Ԗڂɓo�^
	Draw::LoadImage(L"Earth.png", 31, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���36�Ԗڂɓo�^
	Draw::LoadImage(L"Jupiter.png", 36, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���34�Ԗڂɓo�^
	Draw::LoadImage(L"Skysomething.png", 34, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���29�Ԗڂɓo�^
	Draw::LoadImage(L"Unknown.png", 29, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���50�Ԗڂɓo�^
	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���51�Ԗڂɓo�^
	Draw::LoadImage(L"desk.png", 51, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���15�Ԗڂɓo�^
	Draw::LoadImage(L"kagus.png", 15, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���52�Ԗڂɓo�^
	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_512);

	//���������
	Draw::LoadImage(L"Text2.png", 40, TEX_SIZE_64);

	//���������(Poison)
	Draw::LoadImage(L"Text5.png", 41, TEX_SIZE_64);

	//���������(Poison)
	Draw::LoadImage(L"Text6.png", 42, TEX_SIZE_64);

	//���������(Poison)
	Draw::LoadImage(L"Text6.png", 43, TEX_SIZE_64);


	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();
	//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^
	Objs::InsertObj(obj, OBJ_HERO, 5);

	CObjMap2*obj_m2 = new CObjMap2();
	Objs::InsertObj(obj_m2, OBJ_MAP5, 1);



	//�}�b�v�w�i�I�u�W�F�N�g�쐬
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	CObjTips2*obj_Tips2 = new CObjTips2();
	Objs::InsertObj(obj_Tips2, OBJ_TIPS2, 5);

	CObjTips3*obj_Tips3 = new CObjTips3();
	Objs::InsertObj(obj_Tips3, OBJ_TIPS3, 5);

	CObjTips4*obj_Tips4 = new CObjTips4();
	Objs::InsertObj(obj_Tips4, OBJ_TIPS4, 4);

	CObjTips5*obj_Tips5 = new CObjTips5();
	Objs::InsertObj(obj_Tips5, OBJ_TIPS5, 5);



	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		Audio::Stop(0);//�G���o�������0�Ԃ��~��
		Audio::Start(2);//2�Ԃ��X�^�[�g�����
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

}
//���s�����\�b�h
void CSceneMap2::Scene()
{

}
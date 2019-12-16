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
#include "SceneMap6.h"
#include "ObjEnemy.h"
#include<time.h>

//�R���X�g���N�^
CSceneMap6::CSceneMap6()
{

}
//�f�X�g���N�^
CSceneMap6::~CSceneMap6()
{

}
//���������\�b�h
void CSceneMap6::InitScene()
{

	//���y���̓ǂݍ���
	Audio::LoadAudio(0, L"kamen-night.wav", SOUND_TYPE::BACK_MUSIC);


	//�o�b�N�~���[�W�b�N�X�^�[�g
	float Volume = Audio::VolumeMaster(-0.0f); //�}�X�^�[�{�����[���������Ȃ�
	Audio::Start(0); //���y�X�^�[�g





	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	Draw::LoadImageW(L"�{�I������.png", 10, TEX_SIZE_512);

	Draw::LoadImageW(L"�J�[�y�b�g�Q.png", 11, TEX_SIZE_512);

	Draw::LoadImageW(L"�\����.png", 12, TEX_SIZE_64);

	//���ʉ�
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 100);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	CObjItem*obji = new CObjItem(393, 300);
	Objs::InsertObj(obji, OBJ_ITEM, 1);

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap6*map6 = new CObjMap6();
	Objs::InsertObj(map6, OBJ_MAP6, 10);




	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
}
//���s�����\�b�h
void CSceneMap6::Scene()
{

}
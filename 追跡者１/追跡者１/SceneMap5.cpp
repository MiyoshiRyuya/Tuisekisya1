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
#include"SceneMap5.h"
#include<time.h>

//�R���X�g���N�^
CSceneMap5::CSceneMap5()
{

}
//�f�X�g���N�^
CSceneMap5::~CSceneMap5()
{

}
//���������\�b�h
void CSceneMap5::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);


	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);


	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);


	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	Draw::LoadImage(L"�Ώ�.png", 12, TEX_SIZE_512);

	Draw::LoadImage(L"�Α�.png", 13, TEX_SIZE_512);

	//Draw::LoadImageW(L"�K�i.png", 14, TEX_SIZE_512);

	Draw::LoadImageW(L"�J�[�y�b�g�Q.png", 11, TEX_SIZE_512);

	Draw::LoadImage(L"�K�i�������.png", 9, TEX_SIZE_512);

	//���ʉ�
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap5*map5 = new CObjMap5();
	Objs::InsertObj(map5, OBJ_MAP5, 1);

	//�g���b�v�I�u�W�F�N�g
	//CObjtrap*obj_trap = new CObjtrap();
	//Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
}
//���s�����\�b�h
void CSceneMap5::Scene()
{

}
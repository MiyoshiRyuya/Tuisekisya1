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
#include"SceneMap.h"
#include "SceneCloset.h"
#include<time.h>


//�R���X�g���N�^
CSceneMap::CSceneMap()
{

}
//�f�X�g���N�^
CSceneMap::~CSceneMap()
{

}
//���������\�b�h
void CSceneMap::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���6�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"Closet1.png", 11, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�g���b�v�I�u�W�F�N�g�쐬
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//�N���[�[�b�g�\��
	CObjCloset*obj_Closet = new CObjCloset();
	Objs::InsertObj(obj_Closet, OBJ_CLOSET, 1);

	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	


	srand(time(NULL));

	int s = rand() % 4 +1; //50���̊m���œG�o��
	if (1<=s&&s<=3)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

}
//���s�����\�b�h
void CSceneMap::Scene()
{

}
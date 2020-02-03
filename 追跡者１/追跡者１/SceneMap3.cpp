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
#include"SceneMap3.h"
#include "ObjCloset.h"
#include<time.h>

//�R���X�g���N�^
CSceneMap3::CSceneMap3()
{

}
//�f�X�g���N�^
CSceneMap3::~CSceneMap3()
{

}
//���������\�b�h
void CSceneMap3::InitScene()
{

	Audio::LoadAudio(0, L"n105.wav", SOUND_TYPE::BACK_MUSIC);
	Audio::LoadAudio(2, L"memai2 (online-audio-converter.com).wav", SOUND_TYPE::BACK_MUSIC);
	Audio::LoadAudio(4, L"doa.wav", SOUND_TYPE::EFFECT);

	//�o�b�N�~���[�W�b�N�X�^�[�g
	float Volume = Audio::VolumeMaster(-1.0f); //�}�X�^�[�{�����[����1������
	Audio::Start(0); //���y�X�^�[�g




	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^(64*64pixel)
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���11�Ԃɓo�^�i64�~64�s�N�Z���j
	Draw::LoadImage(L"Closet1.png", 11, TEX_SIZE_64);

	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();

	//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^
	Objs::InsertObj(obj, OBJ_HERO, 10);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 12, TEX_SIZE_512);

	Draw::LoadImage(L"bed.png", 13, TEX_SIZE_64);

	Draw::LoadImage(L"SofaandTable.png", 14, TEX_SIZE_64);

	//�g���b�v�I�u�W�F�N�g
	CObjtrap2*obj_trap2 = new CObjtrap2(500,0);
	Objs::InsertObj(obj_trap2, OBJ_TRAP, 1);

	CObjtrap2*obj_trap2a = new CObjtrap2(242, 520);
	Objs::InsertObj(obj_trap2a, OBJ_TRAP, 1);

	//�g���b�v�I�u�W�F�N�g
	CObjtrap1*obj_trap1 = new CObjtrap1(70, 550);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 1);

	CObjCloset*obj_closet = new CObjCloset();
	Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap3*map3 = new CObjMap3();
	Objs::InsertObj(map3, OBJ_MAP3, 1);

	srand(time(NULL));

	int s = rand() % 2 + 1; //50���̊m���œG�o��
	if (s == 1)
	{
		Audio::Stop(0);
		Audio::Start(2);

		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
	
	Audio::LoadAudio(1, L"OpenSE.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	Audio::Start(1);
	
}
//���s�����\�b�h
void CSceneMap3::Scene()
{
	
}
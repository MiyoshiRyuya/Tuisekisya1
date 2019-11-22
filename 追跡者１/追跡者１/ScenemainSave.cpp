//STL�f�o�b�N�@�\��OFF�ɂ���B
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include "GameL\Audio.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include"Scenemain.h"
#include"GameHead.h"

//�R���X�g���N�^
CScenemainSave::CScenemainSave()
{

}

//�f�X�g���N�^
CScenemainSave::~CScenemainSave()
{

}

//�Q�[�����C�����������\�b�h
void CScenemainSave::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"�Z�[�u���");

	//���ʉ����ǂݍ���
	Audio::LoadAudio(0, L"menyu.wav", SOUND_TYPE::EFFECT);

	float Volume = Audio::VolumeMaster(-0.5f); //�}�X�^�[�{�����[����0.5������
	Audio::Start(0); //���y�X�^�[�g

	//�Z�[�u��ʃI�u�W�F�N�g�쐬
	CObjmainSave* obj = new CObjmainSave();      //�Z�[�u��ʃI�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_MAINSAVE, 10);  //��l���I�u�W�F�N�g�o�^
}

//�Q�[�����C�����s�����\�b�h
void CScenemainSave::Scene()
{

}
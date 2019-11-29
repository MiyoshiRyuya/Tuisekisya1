//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\Audio.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include "SceneGameClear.h"

//�R���X�g���N�^
CSceneGameClear::CSceneGameClear()
{

}
//�f�X�g���N�^
CSceneGameClear::~CSceneGameClear()
{

}
//���������\�b�h
void CSceneGameClear::InitScene()
{
	//���y���̓ǂݍ���
	Audio::LoadAudio(0, L"7kuchibue.wav", SOUND_TYPE::BACK_MUSIC);

	//�o�b�N�~���[�W�b�N�X�^�[�g
	float Volume = Audio::VolumeMaster(-0.0f); //�}�X�^�[�{�����[���������Ȃ�
	Audio::Start(0); //���y�X�^�[�g



	//�^�C�g���I�u�W�F�N�g�쐬
	CObjGameClear*obj = new CObjGameClear();//�Q�[���I�[�o�[�I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_GAME_CLEAR, 10);//�Q�[���I�[�o�[�I�u�W�F�N�g�o�^



}
//���s�����\�b�h
void CSceneGameClear::Scene()
{

}
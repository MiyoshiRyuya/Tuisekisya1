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
#include"SceneMap3.h"


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
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���2�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���5�Ԗڂɓo�^
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԗڂɓo�^
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԗڂɓo�^
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);

	//�g���b�v�I�u�W�F�N�g
	CObjtrap*obj_trap = new CObjtrap(542,292);
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	

	

	//�}�b�v�w�i�I�u�W�F�N�g1�쐬
	CObjMap3*map3 = new CObjMap3();
	Objs::InsertObj(map3, OBJ_MAP3, 1);
}
//���s�����\�b�h
void CSceneMap3::Scene()
{
	
}
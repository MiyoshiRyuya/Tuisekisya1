//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

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
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512*512pixel)
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);

	

	//��l���I�u�W�F�N�g�쐬
	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�G�I�u�W�F�N�g
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);

	//block�I�u�W�F�N�g�쐬
	CObjstage*objb = new CObjstage();
	Objs::InsertObj(objb, OBJ_STAGE,9);
}
//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{

}
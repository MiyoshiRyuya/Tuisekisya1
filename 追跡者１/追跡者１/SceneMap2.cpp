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
#include"SceneMap2.h"


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

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�g���b�v�I�u�W�F�N�g
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//���C���V�[���I�u�W�F�N�g
	//CObjMain*obj_main = new CObjMain();
	//Objs::InsertObj(obj_main, OBJ_MAIN, 2);
}
//���s�����\�b�h
void CSceneMap2::Scene()
{

}
//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"


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

	CObjHero*obj = new CObjHero();//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1);//�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^


}
//���s�����\�b�h
void CSceneMap::Scene()
{

}
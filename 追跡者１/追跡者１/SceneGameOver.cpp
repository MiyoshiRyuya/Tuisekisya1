//STL�f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

//�R���X�g���N�^
CSceneGameOver::CSceneGameOver()
{

}
//�f�X�g���N�^
CSceneGameOver::~CSceneGameOver()
{

}
//���������\�b�h
void CSceneGameOver::InitScene()
{

	//�^�C�g���I�u�W�F�N�g�쐬
	CObjGameOver*obj = new CObjGameOver();//�Q�[���I�[�o�[�I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);//�Q�[���I�[�o�[�I�u�W�F�N�g�o�^



}
//���s�����\�b�h
void CSceneGameOver::Scene()
{

}
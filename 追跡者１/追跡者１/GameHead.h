#pragma once

//�I�u�W�F�N�g�l�[��------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//�I�u�W�F�N�g������(�֎~)
	//�Q�[���Ŏg���I�u�W�F�N�g�̖��O
	//OBJ_�����ƕ\�L
	OBJ_HERO,
	OBJ_STAGE,
	OBJ_ENEMY,
	OBJ_TRAP,
	OBJ_TRAP1,
	OBJ_TRAP2,
	OBJ_TRAP3,
	OBJ_FURNITURE,
	OBJ_FURNITURE1,
	OBJ_FURNITURE2,
	OBJ_FURNITURE3,
	OBJ_FURNITURE4,
	OBJ_FURNITURE5,
	OBJ_FURNITURE6,
	OBJ_FURNITURE7,
	OBJ_FURNITURE8,
	OBJ_MAP,
	OBJ_MAP2,
	OBJ_MAP3,
	OBJ_MAP4,
	OBJ_MAP5,
	OBJ_MAP6,
	OBJ_MAIN,

	OBJ_MENU,
	OBJ_MAINSAVE,
	OBJ_SAVE1,
	OBJ_SAVE2,
	OBJ_SAVE3,
	OBJ_ITEM,
	OBJ_MAINROAD,
	OBJ_ROAD1,
	OBJ_ROAD2,
	OBJ_ROAD3,
	OBJ_EQUIPPED,
	OBJ_EQUIPPED2,
	OBJ_EQUIPPED3,
	OBJ_TOSOLVEMYATERY,

	OBJ_TITLE,
	OBJ_GAME_OVER,
};
//------------------------------------------------

//�����蔻�葮��----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//�������� �S�Ă̑����Ɠ����蔻�肪���s�����
	//�ȉ��@�����������m�ł͓����蔻��͎��s����Ȃ�
	//�����͒ǉ��\�����A�f�o�b�N���̐F�͏����ݒ蕪��������
	ELEMENT_PLAYER,
	ELEMENT_ENEMY,
	ELEMENT_ITEM,
	ELEMENT_MAGIC,
	ELEMENT_FIELD,
	ELEMENT_RED,
	ELEMENT_GREEN,
	ELEMENT_BLUE,
	ELEMENT_BLACK,
	ELEMENT_WHITE,
};
//------------------------------------------------

//------------------------------------------------
//�Z�[�u�����[�h�ƃV�[���Ԃ̂���肷��f�[�^
struct UserData
{
	int mSeveData;	//�T���v���Z�[�u�f�[�^
	
};
//------------------------------------------------


//�Q�[�����Ŏg�p�����O���[�o���ϐ��E�萔�E��--



//------------------------------------------------
//�Q�[�����Ŏg�p����N���X�w�b�_------------------


//------------------------------------------------

//�Q�[���V�[���I�u�W�F�N�g�w�b�_------------------
#include "ObjHero.h"
#include "Objstage.h"
#include "ObjEnemy.h"
#include "Objtrap.h"
#include "Objtrap1.h"
#include "Objtrap2.h"
#include "Objtrap3.h"
#include "ObjFurniture.h"
#include "ObjFurniture1.h"
#include "ObjFurniture2.h"
#include "ObjFurniture3.h"
#include "ObjFurniture4.h"
#include "ObjFurniture5.h"
#include "ObjFurniture6.h"
#include "ObjFurnirure7.h"
#include "ObjFurniture8.h"
#include "ObjMap.h"
#include "Map2.h"
#include "Map3.h"
#include "Map4.h"
#include "Map5.h"
#include "Map6.h"
#include "ObjMain.h"

#include"ObjMenu.h"
#include"ObjmainSave.h"
#include"ObjSave1.h"
#include"ObjSave2.h"
#include"ObjSave3.h"
#include"ObjItem.h"
#include"ObjmainRoad.h"
#include"ObjRoad1.h"
#include"ObjRoad2.h"
#include"ObjRoad3.h"
#include"ObjEquipped.h"
#include"OBJEquipped2.h"
#include"OBJEquipped3.h"
#include"ObjTo solve mystery.h"

#include "ObjTitle.h"
#include "ObjGameOver.h"
//------------------------------------------------

//�Q�[���V�[���N���X�w�b�_------------------------
#include "SceneMain.h"
#include "SceneTitle.h"
#include "SceneGameOver.h"
#include"SceneMenu.h"
#include"ScenemainSave.h"
#include"SceneSave1.h"
#include"SceneSave2.h"
#include"SceneSave3.h"
#include"SceneItem.h"
#include"ScenemainRoad.h"
#include"SceneRoad1.h"
#include"SceneRoad2.h"
#include"SceneRoad3.h"
#include"SceneMap.h"
#include"SceneMap2.h"
#include"SceneMap3.h"
#include"SceneMap4.h"
#include"SceneMap5.h"
#include"SceneMap6.h"
#include"SceneEquipped.h"
#include"SceneEquipped2.h"
#include"SceneEquipped3.h"
#include"SceneTo solve mystery.h"
//-----------------------------------------------

//�V�[���X�^�[�g�N���X---------------------------
//�Q�[���J�n���̃V�[���N���X�o�^
#define SET_GAME_START  CSceneTitle
//-----------------------------------------------
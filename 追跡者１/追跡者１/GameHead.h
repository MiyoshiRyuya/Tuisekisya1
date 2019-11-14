#pragma once

//オブジェクトネーム------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//オブジェクト名無し(禁止)
	//ゲームで使うオブジェクトの名前
	//OBJ_○○と表記
	OBJ_HERO,
	OBJ_STAGE,
	OBJ_ENEMY,
	OBJ_TRAP,
	OBJ_FURNITURE,
	OBJ_FURNITURE1,
	OBJ_FURNITURE2,
	OBJ_MAP,
	OBJ_MAIN,

	OBJ_MENU,
	OBJ_MAINSAVE,
	OBJ_SAVE1,
	OBJ_SAVE2,
	OBJ_SAVE3,
	OBJ_ITEM,
	OBJ_ROAD,
	OBJ_EQUIPPED,
	OBJ_EQUIPPED2,
	OBJ_EQUIPPED3,

	OBJ_TITLE,
	OBJ_GAME_OVER,
};
//------------------------------------------------

//当たり判定属性----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//属性無し 全ての属性と当たり判定が実行される
	//以下　同じ属性同士では当たり判定は実行されない
	//属性は追加可能だが、デバック時の色は初期設定分しか無い
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
//セーブ＆ロードとシーン間のやり取りするデータ
struct UserData
{
	int mSeveData;	//サンプルセーブデータ
	
};
//------------------------------------------------


//ゲーム内で使用されるグローバル変数・定数・列挙--



//------------------------------------------------
//ゲーム内で使用するクラスヘッダ------------------


//------------------------------------------------

//ゲームシーンオブジェクトヘッダ------------------
#include "ObjHero.h"
#include "Objstage.h"
#include "ObjEnemy.h"
#include "Objtrap.h"
#include "ObjFurniture.h"
#include "ObjFurniture1.h"
#include "ObjFurniture2.h"
#include "ObjMap.h"
#include"ObjMain.h"

#include"ObjMenu.h"
#include"ObjmainSave.h"
#include"ObjSave1.h"
#include"ObjSave2.h"
#include"ObjSave3.h"
#include"ObjItem.h"
#include"ObjRoad.h"
#include"ObjEquipped.h"
#include"OBJEquipped2.h"
#include"OBJEquipped3.h"

#include "ObjTitle.h"
#include "ObjGameOver.h"
//------------------------------------------------

//ゲームシーンクラスヘッダ------------------------
#include "SceneMain.h"
#include "SceneTitle.h"
#include "SceneGameOver.h"
#include"SceneMenu.h"
#include"ScenemainSave.h"
#include"SceneSave1.h"
#include"SceneSave2.h"
#include"SceneSave3.h"
#include"SceneItem.h"
#include"SceneRoad.h"
#include"SceneMap.h"
#include"SceneEquipped.h"
#include"SceneEquipped2.h"
#include"SceneEquipped3.h"
//-----------------------------------------------

//シーンスタートクラス---------------------------
//ゲーム開始時のシーンクラス登録
#define SET_GAME_START  CSceneMain
//-----------------------------------------------
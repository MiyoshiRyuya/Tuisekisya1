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

	//罠
	OBJ_TRAP,

	//アイテム
	OBJ_ITEM,

	//家具
	OBJ_FURNITURE,
	OBJ_FURNITURE1,
	OBJ_FURNITURE2,
	OBJ_FURNITURE3,
	OBJ_FURNITURE4,
	OBJ_FURNITURE5,
	OBJ_FURNITURE6,
	OBJ_FURNITURE7,
	OBJ_FURNITURE8,
	OBJ_FURNITURE9,
	OBJ_FURNITURE10,
	OBJ_FURNITURE11,
	OBJ_FURNITURE12,
	OBJ_FURNITURE13,
	OBJ_FURNITURE14,
	OBJ_FURNITURE15,
	OBJ_FURNITURE16,
	OBJ_FURNITURE17,
	OBJ_FURNITURE18,
	OBJ_FURNITURE19,
	OBJ_FURNITURE20,
	OBJ_FURNITURE21,
	OBJ_FURNITURE22,
	OBJ_FURNITURE23,
	OBJ_FURNITURE24,
	OBJ_FURNITURE25,
	OBJ_FURNITURE26,
	OBJ_FURNITURE27,
	OBJ_FURNITURE28,
	OBJ_FURNITURE29,
	OBJ_FURNITURE30,
	OBJ_FURNITURE31,
	OBJ_FURNITURE32,
	OBJ_FURNITURE33,
	OBJ_FURNITURE34,
	OBJ_FURNITURE35,
	OBJ_FURNITURE36,
	OBJ_FURNITURE37,
	OBJ_FURNITURE38,
	OBJ_FURNITURE39,
	OBJ_FURNITURE40,
	OBJ_FURNITURE41,
	OBJ_FURNITURE42,
	OBJ_FURNITURE43,
	OBJ_FURNITURE44,


	
	//マップ
	OBJ_MAP,
	OBJ_MAP2,
	OBJ_MAP3,
	OBJ_MAP4,
	OBJ_MAP5,
	OBJ_MAP6,
	OBJ_MAIN,

	//マップ移動用
	OBJ_MOVE5,

	//システム
	OBJ_SOLVE,
	OBJ_SOLVE2,
	OBJ_CLOSET,

	//タイトル系
	OBJ_TITLE,
	OBJ_GAME_OVER,
	OBJ_GAME_CLEAR,

	//マップ移動用
	OBJ_MOVE1,
	OBJ_MOVE2,
	OBJ_MOVE3,
	OBJ_MOVE4,
	OBJ_MOVE6,
	OBJ_MOVE7,
	OBJ_MOVE8,
	OBJ_MOVE9,
	OBJ_MOVE10,
	OBJ_MOVE11,
	OBJ_MOVE12,
	OBJ_MOVE13,

	//出口
	OBJ_ESC,

	//メニュー
	OBJ_MENU2,
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
	ELEMENT_MYS,
	ELEMENT_SOLVE,
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
extern float g_Xz; //主人公
extern float g_Yz;
extern float genzaiti; //現在地


//------------------------------------------------
//ゲーム内で使用するクラスヘッダ------------------


//------------------------------------------------

//ゲームシーンオブジェクトヘッダ------------------
#include "ObjHero.h"
#include "Objstage.h"
#include "ObjEnemy.h"

//罠
#include "Objtrap.h"

//アイテム
#include "ObjItem.h"

//家具
#include "ObjFurniture.h"
#include "ObjFurniture1.h"
#include "ObjFurniture2.h"
#include "ObjFurniture3.h"
#include "ObjFurniture4.h"
#include "ObjFurniture5.h"
#include "ObjFurniture6.h"
#include "ObjFurnirure7.h"
#include "ObjFurniture8.h"
#include "ObjFurniture9.h"
#include "ObjFurniture10.h"
#include "ObjFurniture11.h"
#include "ObjFurniture12.h"
#include "ObjFurniture13.h"
#include "ObjFurniture14.h"
#include "ObjFurniture15.h"
#include "ObjFurniture16.h"
#include "ObjFurniture17.h"
#include "ObjFurniture18.h"
#include "ObjFurniture19.h"
#include "ObjFurniture20.h"
#include "ObjFurniture21.h"
#include "ObjFurniture22.h"
#include "ObjFurniture23.h"
#include "ObjFurniture24.h"
#include "ObjFurniture25.h"
#include "ObjFurniture26.h"
#include "ObjFurniture27.h"
#include "ObjFurniture28.h"
#include "ObjFurniture29.h"
#include "ObjFurniture30.h"
#include "ObjFurniture31.h"
#include "ObjFurniture32.h"
#include "ObjFurniture33.h"
#include "ObjFurniture34.h"
#include "ObjFurniture35.h"
#include "ObjFurniture36.h"
#include "ObjFurniture37.h"
#include "ObjFurniture38.h"
#include "ObjFurniture39.h"
#include "ObjFurniture40.h"
#include "ObjFurniture41.h"
#include "ObjFurniture42.h"
#include "ObjFurniture43.h"
#include "ObjFurnirure44.h"

//メニュー
#include "ObjMenu2.h"



//マップ
#include "ObjMap.h"
#include "Map2.h"
#include "Map3.h"
#include "Map4.h"
#include "Map5.h"
#include "Map6.h"
#include "ObjMain.h"

#include"ObjCloset.h"
#include"ObjMenu2.h"
#include"Objsolve.h"
#include"Objsolve2.h"

#include "ObjTitle.h"
#include "ObjGameOver.h"
#include "ObjGameClear.h"
//------------------------------------------------

//ゲームシーンクラスヘッダ------------------------
#include "SceneMain.h"
#include "SceneTitle.h"
#include "SceneGameOver.h"
#include "SceneGameClear.h"
#include"SceneMenu2.h"

#include"SceneMap.h"
#include"SceneMap2.h"
#include"SceneMap3.h"
#include"SceneMap4.h"
#include"SceneMap5.h"
#include"SceneMap6.h"
#include"SceneMenu2.h"

#include"SceneMenu2.h"
#include"SceneCloset.h"
#include"Scenesolve.h"
#include"Scenesolve2.h"
//-----------------------------------------------

//シーンスタートクラス---------------------------
//ゲーム開始時のシーンクラス登録
#define SET_GAME_START  CSceneMap5
//-----------------------------------------------
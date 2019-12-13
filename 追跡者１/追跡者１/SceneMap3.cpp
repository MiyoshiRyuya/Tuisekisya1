//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"

//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include"SceneMap3.h"
#include "ObjCloset.h"
#include<time.h>

//コンストラクタ
CSceneMap3::CSceneMap3()
{

}
//デストラクタ
CSceneMap3::~CSceneMap3()
{

}
//初期化メソッド
void CSceneMap3::InitScene()
{
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録w
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み11番に登録（64×64ピクセル）
	Draw::LoadImage(L"Closet1.png", 11, TEX_SIZE_64);
	//謎解きヒント
	Draw::LoadImage(L"Tips2.png", 51, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 10);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//外部グラフィックファイルを読み込み3番目に登録
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	Draw::LoadImage(L"bed.png", 13, TEX_SIZE_64);

	Draw::LoadImage(L"SofaandTable.png", 14, TEX_SIZE_64);

	Draw::LoadImage(L"Tips2.png", 14, TEX_SIZE_64);

	//トラップオブジェクト
	CObjtrap*obj_trap = new CObjtrap(542,292);
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);
	//トラップオブジェクト
	CObjtrap1*obj_trap1 = new CObjtrap1(70, 550);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 1);

	//謎解きヒント
	CObjFurniture44*obj_Furniture44 = new CObjFurniture44();
	Objs::InsertObj(obj_Furniture44, OBJ_FURNITURE44, 5);

	CObjCloset*obj_closet = new CObjCloset();
	Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);

	//マップ背景オブジェクト1作成
	CObjMap3*map3 = new CObjMap3();
	Objs::InsertObj(map3, OBJ_MAP3, 1);

	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
}
//実行中メソッド
void CSceneMap3::Scene()
{
	
}
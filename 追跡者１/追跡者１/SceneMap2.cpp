//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"

//使用するネームスペース
using namespace GameL;

#include "GameHead.h"
#include"SceneMap2.h"
#include "SceneMain.h"
#include "ObjFurniture.h"


//コンストラクタ
CSceneMap2::CSceneMap2()
{

}
//デストラクタ
CSceneMap2::~CSceneMap2()
{

}
//初期化メソッド
void CSceneMap2::InitScene()
{
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	Draw::LoadImage(L"desk.png", 51, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//トラップオブジェクト
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 2);

	CObjMap2*obj_m2 = new CObjMap2();
	Objs::InsertObj(obj_m2, OBJ_MAP5, 2);

	//マップ背景オブジェクト1作成
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);


	//メインシーンオブジェクト
	//CObjMain*obj_main = new CObjMain();
	//Objs::InsertObj(obj_main, OBJ_MAIN, 2);

}
//実行中メソッド
void CSceneMap2::Scene()
{

}
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

#include "SceneMain.h"
#include "GameHead.h"
#include"SceneMap4.h"

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



//コンストラクタ
CSceneMap4::CSceneMap4()
{

}
//デストラクタ
CSceneMap4::~CSceneMap4()
{

}
//初期化メソッド
void CSceneMap4::InitScene()
{
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//トラップオブジェクト
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//外部グラフィックファイルを読み込み3番目に登録(64*64pixel)
	Draw::LoadImage(L"Horrorbear.png", 3, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み4番目に登録
	Draw::LoadImage(L"Bookshelf.png", 4, TEX_SIZE_32);

	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み7番目に登録
	Draw::LoadImage(L"Horrorbear.png", 7, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み8番目に登録
	Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"SofaandTable.png", 9, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み10番目に登録
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み11番目に登録
	Draw::LoadImage(L"SC-Candle.png", 11, TEX_SIZE_64);

}
//実行中メソッド
void CSceneMap4::Scene()
{

}
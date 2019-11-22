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
#include "SceneMap6.h"
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
CSceneMap6::CSceneMap6()
{

}
//デストラクタ
CSceneMap6::~CSceneMap6()
{

}
//初期化メソッド
void CSceneMap6::InitScene()
{
	
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	

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


	/*
	Draw::LoadImageW(L"本棚横並び.png", 10, TEX_SIZE_512);
	*/
	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//マップ背景オブジェクト1作成
	CObjMap6*map6 = new CObjMap6();
	Objs::InsertObj(map6, OBJ_MAP6, 1);


		//敵オブジェクト
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);


	//罠オブジェクト作成
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//罠オブジェクト1作成
	CObjtrap1*obj_trap1 = new CObjtrap1();
	Objs::InsertObj(obj_trap1, OBJ_TRAP1, 1);

	//罠オブジェクト2作成
	CObjtrap2*obj_trap2 = new CObjtrap2();
	Objs::InsertObj(obj_trap2, OBJ_TRAP2, 1);

	//罠オブジェクト3作成
	CObjtrap3*obj_trap3 = new CObjtrap3();
	Objs::InsertObj(obj_trap3, OBJ_TRAP3, 1);





	//家具オブジェクト作成
	CObjFurniture*obj_Furnirure = new CObjFurniture();
	Objs::InsertObj(obj_Furnirure, OBJ_FURNITURE, 1);

	//家具オブジェクト1作成
	CObjFurniture1*obj_Furnirure1 = new CObjFurniture1();
	Objs::InsertObj(obj_Furnirure1, OBJ_FURNITURE1, 1);

	//家具オブジェクト2作成
	CObjFurniture2*obj_Furnirure2 = new CObjFurniture2();
	Objs::InsertObj(obj_Furnirure2, OBJ_FURNITURE2, 1);

	//家具オブジェクト3作成
	CObjFurniture3*obj_Furnirure3 = new CObjFurniture3();
	Objs::InsertObj(obj_Furnirure3, OBJ_FURNITURE3, 1);

	//家具オブジェクト4作成
	CObjFurniture4*obj_Furnirure4 = new CObjFurniture4();
	Objs::InsertObj(obj_Furnirure4, OBJ_FURNITURE4, 1);

	//家具オブジェクト5作成
	CObjFurniture5*obj_Furnirure5 = new CObjFurniture5();
	Objs::InsertObj(obj_Furnirure5, OBJ_FURNITURE5, 1);

	//家具オブジェクト6作成
	CObjFurniture6*obj_Furnirure6 = new CObjFurniture6();
	Objs::InsertObj(obj_Furnirure6, OBJ_FURNITURE6, 1);

	//家具オブジェクト7作成
	CObjFurniture7*obj_Furnirure7 = new CObjFurniture7();
	Objs::InsertObj(obj_Furnirure7, OBJ_FURNITURE7, 1);

	//家具オブジェクト8作成
	CObjFurniture8*obj_Furnirure8 = new CObjFurniture8();
	Objs::InsertObj(obj_Furnirure8, OBJ_FURNITURE8, 1);

	//家具オブジェクト9作成
	CObjFurniture9*obj_Furnirure9 = new CObjFurniture9();
	Objs::InsertObj(obj_Furnirure9, OBJ_FURNITURE9, 1);

	//家具オブジェクト10作成
	CObjFurniture10*obj_Furnirure10 = new CObjFurniture10();
	Objs::InsertObj(obj_Furnirure10, OBJ_FURNITURE10, 1);
}
//実行中メソッド
void CSceneMap6::Scene()
{

}
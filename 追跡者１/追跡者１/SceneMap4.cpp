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


	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"KitchenFloorEX.png", 2, TEX_SIZE_512);

	

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);



	

	//外部グラフィックファイルを読み込み8番目に登録
	//Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);


	

	//外部グラフィックファイルを読み込み11番目に登録
	Draw::LoadImage(L"SC-Candle.png", 11, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み12番目に登録
	Draw::LoadImage(L"KitChen1.png", 12, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み13番目に登録
	Draw::LoadImage(L"KitchenTable1.png", 13, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み14番目に登録
	Draw::LoadImage(L"KitchenTable2.png", 14, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み15番目に登録
	Draw::LoadImage(L"Brain.png", 15, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み16番目に登録
	Draw::LoadImage(L"Heart.png", 16, TEX_SIZE_64);


	

	






	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);

	//敵オブジェクト
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);



	/*
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
	*/



	
	//家具オブジェクト作成
	
	/*
	//家具オブジェクト7作成
	CObjFurniture7*obj_Furnirure7 = new CObjFurniture7();/////
	Objs::InsertObj(obj_Furnirure7, OBJ_FURNITURE7, 1);
	
	//家具オブジェクト8作成
	CObjFurniture8*obj_Furnirure8 = new CObjFurniture8();/////
	Objs::InsertObj(obj_Furnirure8, OBJ_FURNITURE8, 1);
	*/
	
	
	
	
	//家具オブジェクト11作成
	CObjFurniture11*obj_Furnirure11 = new CObjFurniture11();
	Objs::InsertObj(obj_Furnirure11, OBJ_FURNITURE11, 1);

	//家具オブジェクト12作成
	CObjFurniture12*obj_Furnirure12 = new CObjFurniture12();
	Objs::InsertObj(obj_Furnirure12, OBJ_FURNITURE12, 1);

	//家具オブジェクト13作成
	CObjFurniture13*obj_Furnirure13 = new CObjFurniture13();
	Objs::InsertObj(obj_Furnirure13, OBJ_FURNITURE13, 1);

	//家具オブジェクト14作成
	CObjFurniture14*obj_Furnirure14 = new CObjFurniture14();
	Objs::InsertObj(obj_Furnirure14, OBJ_FURNITURE14, 2);

	//家具オブジェクト15作成
	CObjFurniture15*obj_Furnirure15 = new CObjFurniture15();
	Objs::InsertObj(obj_Furnirure15, OBJ_FURNITURE15, 2);

	//家具オブジェクト16作成
	CObjFurniture16*obj_Furnirure16 = new CObjFurniture16();
	Objs::InsertObj(obj_Furnirure16, OBJ_FURNITURE16, 1);

	//家具オブジェクト17作成
	CObjFurniture17*obj_Furnirure17 = new CObjFurniture17();
	Objs::InsertObj(obj_Furnirure17, OBJ_FURNITURE17, 1);

	//家具オブジェクト18作成
	CObjFurniture18*obj_Furnirure18 = new CObjFurniture18();
	Objs::InsertObj(obj_Furnirure18, OBJ_FURNITURE18, 1);

	//家具オブジェクト19作成
	CObjFurniture19*obj_Furnirure19 = new CObjFurniture19();
	Objs::InsertObj(obj_Furnirure19, OBJ_FURNITURE19, 1);

	//家具オブジェクト20作成
	CObjFurniture20*obj_Furnirure20 = new CObjFurniture20();
	Objs::InsertObj(obj_Furnirure20, OBJ_FURNITURE20, 1);

	//家具オブジェクト21作成
	CObjFurniture21*obj_Furnirure21 = new CObjFurniture21();
	Objs::InsertObj(obj_Furnirure21, OBJ_FURNITURE21, 1);

	//家具オブジェクト22作成
	CObjFurniture22*obj_Furnirure22 = new CObjFurniture22();
	Objs::InsertObj(obj_Furnirure22, OBJ_FURNITURE22, 1);

	//家具オブジェクト23作成
	CObjFurniture23*obj_Furnirure23 = new CObjFurniture23();
	Objs::InsertObj(obj_Furnirure23, OBJ_FURNITURE23, 1);

	//家具オブジェクト24作成
	CObjFurniture24*obj_Furnirure24 = new CObjFurniture24();
	Objs::InsertObj(obj_Furnirure24, OBJ_FURNITURE24, 2);

	//家具オブジェクト25作成
	CObjFurniture25*obj_Furnirure25 = new CObjFurniture25();
	Objs::InsertObj(obj_Furnirure25, OBJ_FURNITURE25, 2);



	//マップ背景オブジェクト4作成
	CObjMap4*obj_map4 = new CObjMap4();
	Objs::InsertObj(obj_map4, OBJ_MAP4, 1);

}
//実行中メソッド
void CSceneMap4::Scene()
{

}
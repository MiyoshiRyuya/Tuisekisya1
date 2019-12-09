//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\HitBoxManager.h"


//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include<time.h>

//コンストラクタ
CSceneMain::CSceneMain()
{

}
//デストラクタ
CSceneMain::~CSceneMain()
{

}
//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	//外部データの読み込み(ステージ情報)
	unique_ptr<wchar_t> p;//ステージ情報ポインター
	int size;//ステージ情報の大きさ
	p = Save::ExternalDataOpen(L"stage01.csv", &size);//外部データ読み込み

	Font::SetStrTex(L"0123456789分秒");

	int map[20][20];
	int count = 1;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int w = 0;
			swscanf_s(&p.get()[count], L"%d", &w);

			map[i][j] = w;
			count += 2;
		}
	}

	x = 0;
	y = 0;
	Hits::SetHitBox(this, x =- 10, y +=250, 80, 120, ELEMENT_RED, OBJ_MOVE12, 1);


	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);
	

	//Draw::LoadImage(L"ブロック.png",1,TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み3番目に登録(64*64pixel)
	Draw::LoadImage(L"Horrorbear.png", 3, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み4番目に登録
	Draw::LoadImage(L"Bookshelf.png", 4, TEX_SIZE_32);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

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

	//外部グラフィックファイルを読み込み12番目に登録(512*512pixel)
	Draw::LoadImage(L"KitchenFloor.png", 12, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み11番目に登録
	Draw::LoadImage(L"bed.png", 13, TEX_SIZE_64);







	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);



	//罠オブジェクト作成
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);





	//家具オブジェクト作成
	CObjFurniture*obj_Furnirure = new CObjFurniture();
	Objs::InsertObj(obj_Furnirure, OBJ_FURNITURE,1);

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

	

	//マップ背景オブジェクト1作成
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	//マップ背景オブジェクト2作成
	//CObjMap6*obj_m6 = new CObjMap6();
	//Objs::InsertObj(obj_m6, OBJ_MAP6, 2);

	//blockオブジェクト作成
	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE,9);
}
//ゲームメイン実行中メソッド
void CSceneMain::Scene()
{

}
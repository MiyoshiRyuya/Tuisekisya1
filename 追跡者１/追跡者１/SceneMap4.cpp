//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"
#include<time.h>


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

	//音楽情報の読み込み
	Audio::LoadAudio(0, L"bgm_noroi.wav", SOUND_TYPE::BACK_MUSIC);


	//バックミュージックスタート
	float Volume = Audio::VolumeMaster(-0.0f); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート



	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);


	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"KitchenFloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み3番目に登録
	Draw::LoadImage(L"ImomushiEnemy.png", 4, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);


	//外部グラフィックファイルを読み込み10番目に登録
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);

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

	//外部グラフィックファイルを読み込み17番目に登録
	Draw::LoadImage(L"Cake.png", 17, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み18番目に登録
	Draw::LoadImage(L"Nabe1.png", 18, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み19番目に登録
	Draw::LoadImage(L"Cake1.png", 19, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み20番目に登録
	Draw::LoadImage(L"Meat.png", 20, TEX_SIZE_64);
	
	//外部グラフィックファイルを読み込み21番目に登録
	Draw::LoadImage(L"Mom.png", 21, TEX_SIZE_64);
	
	//外部グラフィックファイルを読み込み22番目に登録
	Draw::LoadImage(L"Nabe2.png", 22, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み23番目に登録
	Draw::LoadImage(L"Hukuro.png", 23, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み24番目に登録
	Draw::LoadImage(L"Meat2.png", 24, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み25番目に登録
	Draw::LoadImage(L"Meat3.png", 25, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み25番目に登録
	Draw::LoadImage(L"Knife1.png", 26, TEX_SIZE_64);






	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 2);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE, 9);

	//敵オブジェクト
	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
	

	//CObjMap4*map4 = new CObjMap4();
	//Objs::InsertObj(map4, OBJ_MAP4, 0);

	
	//トラップオブジェクト
	CObjtrap*obj_trap = new CObjtrap(128, 188);
	Objs::InsertObj(obj_trap, OBJ_TRAP, 2);

	
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

	//家具オブジェクト26作成
	CObjFurniture26*obj_Furnirure26 = new CObjFurniture26();
	Objs::InsertObj(obj_Furnirure26, OBJ_FURNITURE26, 2);

	//家具オブジェクト27作成
	CObjFurniture27*obj_Furnirure27 = new CObjFurniture27();
	Objs::InsertObj(obj_Furnirure27, OBJ_FURNITURE27, 2);

	//家具オブジェクト28作成
	CObjFurniture28*obj_Furnirure28 = new CObjFurniture28();
	Objs::InsertObj(obj_Furnirure28, OBJ_FURNITURE28, 2);

	//家具オブジェクト29作成
	CObjFurniture29*obj_Furnirure29 = new CObjFurniture29();
	Objs::InsertObj(obj_Furnirure29, OBJ_FURNITURE29, 2);

	//家具オブジェクト30作成
	CObjFurniture30*obj_Furnirure30 = new CObjFurniture30();
	Objs::InsertObj(obj_Furnirure30, OBJ_FURNITURE30, 2);

	//家具オブジェクト31作成
	CObjFurniture31*obj_Furnirure31 = new CObjFurniture31();
	Objs::InsertObj(obj_Furnirure31, OBJ_FURNITURE31, 2);

	//家具オブジェクト32作成
	CObjFurniture32*obj_Furnirure32 = new CObjFurniture32();
	Objs::InsertObj(obj_Furnirure32, OBJ_FURNITURE31, 1);

	//家具オブジェクト33作成
	CObjFurniture33*obj_Furnirure33 = new CObjFurniture33();
	Objs::InsertObj(obj_Furnirure33, OBJ_FURNITURE31, 2);

	//家具オブジェクト34作成
	CObjFurniture34*obj_Furnirure34 = new CObjFurniture34();
	Objs::InsertObj(obj_Furnirure34, OBJ_FURNITURE34, 2);

	//家具オブジェクト35作成
	CObjFurniture35*obj_Furnirure35 = new CObjFurniture35();
	Objs::InsertObj(obj_Furnirure35, OBJ_FURNITURE35, 1);

	//家具オブジェクト36作成
	CObjFurniture36*obj_Furnirure36 = new CObjFurniture36();
	Objs::InsertObj(obj_Furnirure36, OBJ_FURNITURE36, 1);

	//家具オブジェクト37作成
	CObjFurniture37*obj_Furnirure37 = new CObjFurniture37();
	Objs::InsertObj(obj_Furnirure37, OBJ_FURNITURE37, 1);

	//家具オブジェクト38作成
	CObjFurniture38*obj_Furnirure38 = new CObjFurniture38();
	Objs::InsertObj(obj_Furnirure38, OBJ_FURNITURE38, 1);

	//家具オブジェクト39作成
	CObjFurniture39*obj_Furnirure39 = new CObjFurniture39();
	Objs::InsertObj(obj_Furnirure39, OBJ_FURNITURE39, 1);

	//家具オブジェクト40作成
	CObjFurniture40*obj_Furnirure40 = new CObjFurniture40();
	Objs::InsertObj(obj_Furnirure40, OBJ_FURNITURE40, 2);

	//家具オブジェクト41作成
	CObjFurniture41*obj_Furnirure41 = new CObjFurniture41();
	Objs::InsertObj(obj_Furnirure41, OBJ_FURNITURE41, 2);

	//家具オブジェクト42作成
	CObjFurniture42*obj_Furnirure42 = new CObjFurniture42();
	Objs::InsertObj(obj_Furnirure42, OBJ_FURNITURE42, 2);

	//家具オブジェクト43作成
	CObjFurniture43*obj_Furnirure43 = new CObjFurniture43();
	Objs::InsertObj(obj_Furnirure43, OBJ_FURNITURE43, 2);




	//マップ背景オブジェクト4作成
	CObjMap4*obj_map4 = new CObjMap4();
	Objs::InsertObj(obj_map4, OBJ_MAP4, 1);

}
//実行中メソッド
void CSceneMap4::Scene()
{

}
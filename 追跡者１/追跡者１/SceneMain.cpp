//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\DrawTexture.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"

//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

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
	p = Save::ExternalDataOpen(L"Stage.csv", &size);//外部データ読み込み

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

	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);
	
	Draw::LoadImageW(L"ブロック.png",1,TEX_SIZE_512);

	Draw::LoadImageW(L"仮.png",3, TEX_SIZE_512);

	Draw::LoadImageW(L"背景.png", 4, TEX_SIZE_512);

	//Draw::LoadImage(L"Enemy1.png", TEX_SIZE_64);



	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 10);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//敵オブジェクト
	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);//描画優先順位

	//blockオブジェクト作成
	//CObjstage*objb = new CObjstage(map);
	//Objs::InsertObj(objb, OBJ_STAGE,9);

	//map作成
	CObjMap*objb = new CObjMap();
	Objs::InsertObj(objb, OBJ_MAP, 9);

	//仮背景作成
	//CObjMap*obj_haikei = new CObjMap();
	//Objs::InsertObj(obj_haikei, OBJ_MAP, 2);
}
//ゲームメイン実行中メソッド
void CSceneMain::Scene()
{

}
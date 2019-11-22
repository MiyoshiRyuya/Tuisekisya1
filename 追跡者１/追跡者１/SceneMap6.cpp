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

	Draw::LoadImageW(L"本棚横並び.png", 10, TEX_SIZE_512);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//マップ背景オブジェクト1作成
//	CObjMap6*map6 = new CObjMap6();
//	Objs::InsertObj(map6, OBJ_MAP6, 1);


		//敵オブジェクト
	//CObjEnemy*obj_enemy = new CObjEnemy();
	//Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1);
}
//実行中メソッド
void CSceneMap6::Scene()
{

}
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
#include"SceneMap3.h"


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

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//外部グラフィックファイルを読み込み3番目に登録
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	Draw::LoadImage(L"Skull.png", 8, TEX_SIZE_64);

	//トラップオブジェクト
	CObjtrap*obj_trap = new CObjtrap(542,292);
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	

	

	//マップ背景オブジェクト1作成
	CObjMap3*map3 = new CObjMap3();
	Objs::InsertObj(map3, OBJ_MAP3, 1);
}
//実行中メソッド
void CSceneMap3::Scene()
{
	
}
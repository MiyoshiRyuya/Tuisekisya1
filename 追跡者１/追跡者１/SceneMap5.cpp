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
#include"SceneMap5.h"


//コンストラクタ
CSceneMap5::CSceneMap5()
{

}
//デストラクタ
CSceneMap5::~CSceneMap5()
{

}
//初期化メソッド
void CSceneMap5::InitScene()
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

}
//実行中メソッド
void CSceneMap5::Scene()
{

}
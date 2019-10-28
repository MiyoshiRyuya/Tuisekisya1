#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"Scenemain.h"
#include"GameHead.h"
#include"SceneSave2.h"

//コンストラクタ
CSceneSave2::CSceneSave2()
{

}

//デストラクタ
CSceneSave2::~CSceneSave2()
{

}

//ゲームメイン初期化メソッド
void CSceneSave2::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"セーブ画面");

	//セーブ画面オブジェクト作成
	CObjSave2* obj = new CObjSave2();      //セーブ画面オブジェクト作成
	Objs::InsertObj(obj, OBJ_SAVE2, 9);  //主人公オブジェクト登録
}

//ゲームメイン実行中メソッド
void CSceneSave2::Scene()
{

}

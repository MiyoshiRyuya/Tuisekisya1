//STLデバック機能をOFFにする。
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"


//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"Scenemain.h"
#include"GameHead.h"
#include"SceneItem.h"

//コンストラクタ
CSceneEquipped3::CSceneEquipped3()
{

}

//デストラクタ
CSceneEquipped3::~CSceneEquipped3()
{

}

//ゲームメイン初期化メソッド
void CSceneEquipped3::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"アイテム説明");

	//メニューオブジェクト作成
	CObjEquipped3* obj = new CObjEquipped3();     //メニューオブジェクト作成
	Objs::InsertObj(obj, OBJ_EQUIPPED3, 10); //主人公オブジェクト登録
}

//ゲームメイン実行中メソッド
void CSceneEquipped3::Scene()
{

}
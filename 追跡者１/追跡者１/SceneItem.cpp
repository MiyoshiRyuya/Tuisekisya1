//STLデバック機能をOFFにする。
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"Scenemain.h"
#include"GameHead.h"

//コンストラクタ
CSceneItem::CSceneItem()
{

}

//デストラクタ
CSceneItem::~CSceneItem()
{

}

//ゲームメイン初期化メソッド
void CSceneItem::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"催涙スプレー");

	//アイテムオブジェクト作成
	CObjItem* obj = new CObjItem();
	Objs::InsertObj(obj, OBJ_ITEM, 10);
}

//ゲームメイン実行中メソッド
void CSceneItem::Scene()
{

}

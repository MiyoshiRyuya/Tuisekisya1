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
CSceneEquipped::CSceneEquipped()
{

}

//デストラクタ
CSceneEquipped::~CSceneEquipped()
{

}

//ゲームメイン初期化メソッド
void CSceneEquipped::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"アイテム説明");

	//メニューオブジェクト作成
	CObjEquipped* obj = new CObjEquipped();     //メニューオブジェクト作成
	Objs::InsertObj(obj, OBJ_EQUIPPED, 10); //主人公オブジェクト登録

	//外部グラフィックファイルを読み込み1番に登録（64×64ピクセル）
	Draw::LoadImage(L"sairyu.png", 1, TEX_SIZE_512);
}

//ゲームメイン実行中メソッド
void CSceneEquipped::Scene()
{

}
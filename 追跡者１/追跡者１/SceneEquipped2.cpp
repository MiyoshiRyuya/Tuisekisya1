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
#include"SceneEquipped2.h"

//コンストラクタ
CSceneEquipped2::CSceneEquipped2()
{

}

//デストラクタ
CSceneEquipped2::~CSceneEquipped2()
{

}

//ゲームメイン初期化メソッド
void CSceneEquipped2::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"アイテム説明");

	//メニューオブジェクト作成
	CObjEquipped2* obj = new CObjEquipped2();     //メニューオブジェクト作成
	Objs::InsertObj(obj, OBJ_EQUIPPED2, 10); //主人公オブジェクト登録

	//外部グラフィックファイルを読み込み0番に登録（64×64ピクセル）
	Draw::LoadImage(L"sairyu.png", 1, TEX_SIZE_512);
}

//ゲームメイン実行中メソッド
void CSceneEquipped2::Scene()
{

}
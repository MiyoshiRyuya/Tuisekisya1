//STLデバック機能をOFFにする。
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

//コンストラクタ
CSceneMenu::CSceneMenu()
{

}

//デストラクタ
CSceneMenu::~CSceneMenu()
{

}

//ゲームメイン初期化メソッド
void CSceneMenu::InitScene()
{
	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"MENU");

	//メニューオブジェクト作成
	CObjMenu* obj = new CObjMenu();     //メニューオブジェクト作成
	Objs::InsertObj(obj, OBJ_MENU, 10); //主人公オブジェクト登録
}

//ゲームメイン実行中メソッド
void CSceneMenu::Scene()
{

}
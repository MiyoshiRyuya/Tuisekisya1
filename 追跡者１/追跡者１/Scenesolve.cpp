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
#include"Scenesolve.h"
#include"GameHead.h"


//コンストラクタ
CScenesolve::CScenesolve()
{

}

//デストラクタ
CScenesolve::~CScenesolve()
{

}

//ゲームメイン初期化メソッド
void CScenesolve::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録（64×64ピクセル）
	Draw::LoadImage(L"Nazotoki.png", 1, TEX_SIZE_512);

	//謎解き画面表示
	CObjsolve*obj = new CObjsolve();
	Objs::InsertObj(obj, OBJ_SOLVE, 1);
}

//ゲームメイン実行中メソッド
void CScenesolve::Scene()
{

}
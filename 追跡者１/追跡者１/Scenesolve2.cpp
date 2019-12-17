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
#include"Scenesolve2.h"
#include"GameHead.h"


//コンストラクタ
CScenesolve2::CScenesolve2()
{

}

//デストラクタ
CScenesolve2::~CScenesolve2()
{

}

//ゲームメイン初期化メソッド
void CScenesolve2::InitScene()
{
	//外部グラフィックファイルを読み込み20番に登録（64×64ピクセル）
	//Draw::LoadImage(L"Tips.png", 20, TEX_SIZE_512);

	//謎解き画面表示
	//CObjsolve2*obj = new CObjsolve2(400,300);
	//Objs::InsertObj(obj, OBJ_SOLVE2, 1);
}

//ゲームメイン実行中メソッド
void CScenesolve2::Scene()
{

}
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
#include"SceneTo solve mystery.h"
#include"GameHead.h"


//コンストラクタ
CSceneTosolvemystery::CSceneTosolvemystery()
{

}

//デストラクタ
CSceneTosolvemystery::~CSceneTosolvemystery()
{

}

//ゲームメイン初期化メソッド
void CSceneTosolvemystery::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録（64×64ピクセル）
	Draw::LoadImage(L"Nazotoki.png", 1, TEX_SIZE_512);

	//謎解き画面表示
	CObjTosolvemystery*obj = new CObjTosolvemystery();
	Objs::InsertObj(obj, OBJ_TOSOLVEMYATERY, 1);
}

//ゲームメイン実行中メソッド
void CSceneTosolvemystery::Scene()
{

}
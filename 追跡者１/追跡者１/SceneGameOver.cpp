//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"

//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

//コンストラクタ
CSceneGameOver::CSceneGameOver()
{

}
//デストラクタ
CSceneGameOver::~CSceneGameOver()
{

}
//初期化メソッド
void CSceneGameOver::InitScene()
{


	//外部グラフィックファイルを読み込み1番目に登録(512*512)
	//Draw::LoadImage(L"Title.png", 1, TEX_SIZE_512);

	//タイトルオブジェクト作成
	CObjGameOver*obj = new CObjGameOver();//ゲームオーバーオブジェクト作成
	Objs::InsertObj(obj, OBJ_GAME_OVER, 10);//ゲームオーバーオブジェクト登録



}
//実行中メソッド
void CSceneGameOver::Scene()
{

}
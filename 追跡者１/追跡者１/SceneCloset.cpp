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
#include"SceneCloset.h"
#include"GameHead.h"


//コンストラクタ
CSceneCloset::CSceneCloset()
{

}

//デストラクタ
CSceneCloset::~CSceneCloset()
{

}

//ゲームメイン初期化メソッド
void CSceneCloset::InitScene()
{
	//クローゼットオブジェクト
	CObjCloset*obj_closet = new CObjCloset();
	Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);
}

//ゲームメイン実行中メソッド
void CSceneCloset::Scene()
{

}
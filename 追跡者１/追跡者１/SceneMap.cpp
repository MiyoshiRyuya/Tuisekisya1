//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"


//コンストラクタ
CSceneMap::CSceneMap()
{

}
//デストラクタ
CSceneMap::~CSceneMap()
{

}
//初期化メソッド
void CSceneMap::InitScene()
{

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録


}
//実行中メソッド
void CSceneMap::Scene()
{

}
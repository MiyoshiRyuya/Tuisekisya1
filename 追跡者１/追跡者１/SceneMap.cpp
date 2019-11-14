//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"

//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include"SceneMap.h"


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

	//トラップオブジェクト
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	CObjMain*obj_m = new CObjMain();
	Objs::InsertObj(obj_m, OBJ_MAIN, 2);
}
//実行中メソッド
void CSceneMap::Scene()
{

}
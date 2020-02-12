//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\Audio.h"
//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include"SceneMap.h"
#include "SceneCloset.h"
#include<time.h>


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
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み1番に登録（64×64ピクセル）
	Draw::LoadImage(L"Closet1.png", 11, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//トラップオブジェクト作成
	CObjtrap*obj_trap = new CObjtrap();
	Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	//クローゼット表示
	CObjCloset*obj_Closet = new CObjCloset();
	Objs::InsertObj(obj_Closet, OBJ_CLOSET, 1);

	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	


	srand(time(NULL));

	int s = rand() % 4 +1; //50％の確立で敵出現
	if (1<=s&&s<=3)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

}
//実行中メソッド
void CSceneMap::Scene()
{

}
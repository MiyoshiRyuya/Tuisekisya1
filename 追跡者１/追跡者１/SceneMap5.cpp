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
#include"SceneMap5.h"
#include<time.h>

//コンストラクタ
CSceneMap5::CSceneMap5()
{

}
//デストラクタ
CSceneMap5::~CSceneMap5()
{

}
//初期化メソッド
void CSceneMap5::InitScene()
{
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);


	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);


	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);


	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	Draw::LoadImage(L"石畳.png", 12, TEX_SIZE_512);

	Draw::LoadImage(L"石造.png", 13, TEX_SIZE_512);

	//Draw::LoadImageW(L"階段.png", 14, TEX_SIZE_512);

	Draw::LoadImageW(L"カーペット２.png", 11, TEX_SIZE_512);

	Draw::LoadImage(L"階段がある壁.png", 9, TEX_SIZE_512);

	//効果音
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//マップ背景オブジェクト1作成
	CObjMap5*map5 = new CObjMap5();
	Objs::InsertObj(map5, OBJ_MAP5, 1);

	//トラップオブジェクト
	//CObjtrap*obj_trap = new CObjtrap();
	//Objs::InsertObj(obj_trap, OBJ_TRAP, 1);

	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
}
//実行中メソッド
void CSceneMap5::Scene()
{

}
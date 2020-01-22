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

#include "GameHead.h"
#include"SceneMap2.h"
#include "SceneMain.h"
#include "ObjFurniture.h"
#include<time.h>

//コンストラクタ
CSceneMap2::CSceneMap2()
{

}
//デストラクタ
CSceneMap2::~CSceneMap2()
{

}
//初期化メソッド
void CSceneMap2::InitScene()
{
	Audio::LoadAudio(0, L"amenisuteraretaningyou.wav", SOUND_TYPE::BACK_MUSIC);


	//バックミュージックスタート
	float Volume = Audio::VolumeMaster(-0.0f); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート

	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	Audio::Start(1);


	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"Earth.png", 31, TEX_SIZE_512);

	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	Draw::LoadImage(L"desk.png", 51, TEX_SIZE_64);

	Draw::LoadImage(L"kagus.png", 15, TEX_SIZE_512);

	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_512);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 10);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	CObjMap2*obj_m2 = new CObjMap2();
	Objs::InsertObj(obj_m2, OBJ_MAP5, 1);

	//マップ背景オブジェクト1作成
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	CObjTips2*obj_Tips2 = new CObjTips2();
	Objs::InsertObj(obj_Tips2, OBJ_TIPS2, 10);

	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

}
//実行中メソッド
void CSceneMap2::Scene()
{

}
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
	Audio::LoadAudio(2, L"memai2 (online-audio-converter.com).wav", SOUND_TYPE::BACK_MUSIC);


	//バックミュージックスタート
	float Volume2 = Audio::Volume(0.0f, 2); //ボリュームを下げない

	float Volume = Audio::Volume(-0.0f,0); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート

	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	//Audio::Start(1);

	//メモ2入手時のSE
	Audio::LoadAudio(3, L"itemgetseb .wav", SOUND_TYPE::EFFECT);

	//メモ2入手時のSE
	Audio::LoadAudio(6, L"poison.wav", SOUND_TYPE::EFFECT);

	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み31番目に登録
	Draw::LoadImage(L"Earth.png", 31, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み36番目に登録
	Draw::LoadImage(L"Jupiter.png", 36, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み34番目に登録
	Draw::LoadImage(L"Skysomething.png", 34, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み29番目に登録
	Draw::LoadImage(L"Unknown.png", 29, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み50番目に登録
	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み51番目に登録
	Draw::LoadImage(L"desk.png", 51, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み15番目に登録
	Draw::LoadImage(L"kagus.png", 15, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み52番目に登録
	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_512);

	//謎解きメモ
	Draw::LoadImage(L"Text2.png", 40, TEX_SIZE_64);

	//謎解きメモ(Poison)
	Draw::LoadImage(L"Text5.png", 41, TEX_SIZE_64);

	//謎解きメモ(Poison)
	Draw::LoadImage(L"Text6.png", 42, TEX_SIZE_64);

	//謎解きメモ(Poison)
	Draw::LoadImage(L"Text6.png", 43, TEX_SIZE_64);


	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();
	//作った主人公オブジェクトをオブジェクトマネージャーに登録
	Objs::InsertObj(obj, OBJ_HERO, 5);

	CObjMap2*obj_m2 = new CObjMap2();
	Objs::InsertObj(obj_m2, OBJ_MAP5, 1);



	//マップ背景オブジェクト作成
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	CObjTips2*obj_Tips2 = new CObjTips2();
	Objs::InsertObj(obj_Tips2, OBJ_TIPS2, 5);

	CObjTips3*obj_Tips3 = new CObjTips3();
	Objs::InsertObj(obj_Tips3, OBJ_TIPS3, 5);

	CObjTips4*obj_Tips4 = new CObjTips4();
	Objs::InsertObj(obj_Tips4, OBJ_TIPS4, 4);

	CObjTips5*obj_Tips5 = new CObjTips5();
	Objs::InsertObj(obj_Tips5, OBJ_TIPS5, 5);



	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		Audio::Stop(0);//敵が出現すると0番を止め
		Audio::Start(2);//2番がスタートされる
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

}
//実行中メソッド
void CSceneMap2::Scene()
{

}
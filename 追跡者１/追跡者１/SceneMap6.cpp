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
#include "SceneMap6.h"
#include "ObjEnemy.h"
#include<time.h>

//コンストラクタ
CSceneMap6::CSceneMap6()
{

}
//デストラクタ
CSceneMap6::~CSceneMap6()
{

}
//初期化メソッド
void CSceneMap6::InitScene()
{

	//音楽情報の読み込み
	Audio::LoadAudio(0, L"kamen-night.wav", SOUND_TYPE::BACK_MUSIC);


	//バックミュージックスタート
	float Volume = Audio::VolumeMaster(-0.0f); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート





	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	Draw::LoadImageW(L"本棚横並び.png", 10, TEX_SIZE_512);

	Draw::LoadImageW(L"カーペット２.png", 11, TEX_SIZE_512);

	Draw::LoadImageW(L"十字架.png", 12, TEX_SIZE_64);

	//効果音
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 100);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	CObjItem*obji = new CObjItem(393, 300);
	Objs::InsertObj(obji, OBJ_ITEM, 1);

	//マップ背景オブジェクト1作成
	CObjMap6*map6 = new CObjMap6();
	Objs::InsertObj(map6, OBJ_MAP6, 10);




	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}
}
//実行中メソッド
void CSceneMap6::Scene()
{

}
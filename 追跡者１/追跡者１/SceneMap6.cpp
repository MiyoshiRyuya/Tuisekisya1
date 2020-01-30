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
	

	//ドアの効果音
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	Audio::Start(1);
	

	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX3.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み3番目に登録
	Draw::LoadImage(L"Hari.png", 3, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"kabe1.png", 9, TEX_SIZE_512);

	Draw::LoadImage(L"Chair.png", 50, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_512);

	Draw::LoadImage(L"本棚横並び.png", 10, TEX_SIZE_512);

	Draw::LoadImage(L"カーペット２.png", 11, TEX_SIZE_512);

	Draw::LoadImage(L"十字架.png", 12, TEX_SIZE_64);

	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 100);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	CObjItem*obji = new CObjItem(393, 300);
	Objs::InsertObj(obji, OBJ_ITEM, 1);

	//トラップオブジェクト
	CObjtrap1*obj_trap1 = new CObjtrap1(760, 540);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 10);

	CObjtrap1*obj_trapp1 = new CObjtrap1(0, 150);
	Objs::InsertObj(obj_trapp1, OBJ_TRAP, 10);

	//マップ背景オブジェクト1作成
	CObjMap6*map6 = new CObjMap6();
	Objs::InsertObj(map6, OBJ_MAP6, 10);


	CObjEnemy*obj_enemy = new CObjEnemy();
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 100);
	
}
//実行中メソッド
void CSceneMap6::Scene()
{

}
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

	//音楽情報の読み込み
	Audio::LoadAudio(0, L"chaos.wav", SOUND_TYPE::BACK_MUSIC);


	//バックミュージックスタート
	float Volume = Audio::VolumeMaster(-3.0f); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート

	//ドアの効果音
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	Audio::Start(1);








	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み1番目に登録
	Draw::LoadImage(L"Left.png", 1, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 6, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 52, TEX_SIZE_512);

	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	Draw::LoadImage(L"石畳.png", 12, TEX_SIZE_512);

	Draw::LoadImage(L"石造.png", 13, TEX_SIZE_512);

	//Draw::LoadImageW(L"階段.png", 14, TEX_SIZE_512);

	Draw::LoadImageW(L"カーペット２.png", 11, TEX_SIZE_512);

	Draw::LoadImage(L"階段がある壁.png", 9, TEX_SIZE_512);

	




	CObjHero*obj = new CObjHero();//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	//マップ背景オブジェクト1作成
	CObjMap5*map5 = new CObjMap5();
	Objs::InsertObj(map5, OBJ_MAP5, 1);

	//トラップオブジェクト
	//CObjtrap*obj_trap = new CObjtrap();
	//Objs::InsertObj(obj_trap, OBJ_TRAP, 1);



	
}
//実行中メソッド
void CSceneMap5::Scene()
{

}
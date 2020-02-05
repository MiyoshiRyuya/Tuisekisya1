//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameL\HitBoxManager.h"
#include "GameL\Audio.h"


//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"
#include<time.h>

//コンストラクタ
CSceneMain::CSceneMain()
{

}
//デストラクタ
CSceneMain::~CSceneMain()
{

}
//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{

	Audio::LoadAudio(0, L"desperate .wav", SOUND_TYPE::BACK_MUSIC);
	Audio::LoadAudio(1, L"itemgetseb.wav", EFFECT);
	Audio::LoadAudio(2, L"memai2 (online-audio-converter.com).wav", SOUND_TYPE::BACK_MUSIC);
	//バックミュージックスタート
	float Volume2 = Audio::Volume(0.0f, 2); //ボリュームを下げない

	float Volume = Audio::Volume(0.0f,0); //ボリュームを下げない
	Audio::Start(0); //音楽スタート



	//外部データの読み込み(ステージ情報)
	unique_ptr<wchar_t> p;//ステージ情報ポインター
	int size;//ステージ情報の大きさ
	p = Save::ExternalDataOpen(L"stage01.csv", &size);//外部データ読み込み

	Font::SetStrTex(L"0123456789分秒");

	int map[20][20];
	int count = 1;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int w = 0;
			swscanf_s(&p.get()[count], L"%d", &w);

			map[i][j] = w;
			count += 2;
		}
	}

	x = 0;
	y = 0;
	Hits::SetHitBox(this, x =770, y +=250, 80, 120, ELEMENT_RED, OBJ_MOVE11, 1);


	//主人公オブジェクト作成
	CObjHero*obj = new CObjHero();
	Objs::InsertObj(obj, OBJ_HERO, 4);//作った主人公オブジェクトをオブジェクトマネージャーに登録

	srand(time(NULL));

	int s = rand() % 2 + 1; //50％の確立で敵出現
	if (s == 1)
	{
		Audio::Stop(0);//敵が出現すると0番を止め
		Audio::Start(2);//2番がスタートされる

		CObjEnemy*obj_enemy = new CObjEnemy();
		Objs::InsertObj(obj_enemy, OBJ_ENEMY, 10);
	}

	//ドアの効果音
	Audio::LoadAudio(1, L"doa.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::Volume(1.0f,1);
	//Audio::Start(1);

	


	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Hero2.png", 0, TEX_SIZE_512);
	
	//Draw::LoadImage(L"ブロック.png",1,TEX_SIZE_512);

	//外部グラフィックファイルを読み込み2番目に登録(512*512pixel)
	Draw::LoadImage(L"FloorEX.png", 2, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み5番目に登録
	Draw::LoadImage(L"Enemy1.png", 5, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み6番目に登録
	Draw::LoadImage(L"Hari.png", 16, TEX_SIZE_64);

	Draw::LoadImage(L"ueki.png", 13, TEX_SIZE_512);

	Draw::LoadImage(L"kagus.png", 15, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み9番目に登録
	Draw::LoadImage(L"SofaandTable.png", 9, TEX_SIZE_64);

	//外部グラフィックファイルを読み込み10番目に登録
	Draw::LoadImage(L"BlackMirror.png", 10, TEX_SIZE_64);



	//家具オブジェクト4作成
	CObjFurniture4*obj_Furnirure4 = new CObjFurniture4();
	Objs::InsertObj(obj_Furnirure4, OBJ_FURNITURE4, 3);

	//家具オブジェクト5作成
	CObjFurniture5*obj_Furnirure5 = new CObjFurniture5();
	Objs::InsertObj(obj_Furnirure5, OBJ_FURNITURE5, 3);

	//家具オブジェクト9作成
	CObjFurniture9*obj_Furnirure9 = new CObjFurniture9();
	Objs::InsertObj(obj_Furnirure9, OBJ_FURNITURE9, 3);

	//家具オブジェクト10作成
	CObjFurniture10*obj_Furnirure10 = new CObjFurniture10();
	Objs::InsertObj(obj_Furnirure10, OBJ_FURNITURE10, 3);

	
	//トラップオブジェクト
	CObjtrap3*obj_trap1 = new CObjtrap3(170, 50);
	Objs::InsertObj(obj_trap1, OBJ_TRAP, 4);

	//マップ背景オブジェクト1作成
	CObjMap*obj_map = new CObjMap();
	Objs::InsertObj(obj_map, OBJ_MAP, 1);

	//マップ背景オブジェクト2作成
	CObjMain*obj_main = new CObjMain();
	Objs::InsertObj(obj_main, OBJ_MAIN, 2);


}
//ゲームメイン実行中メソッド
void CSceneMain::Scene()
{

}
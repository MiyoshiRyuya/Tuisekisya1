//STLデバック機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawTexture.h"
#include "GameL\DrawFont.h"
#include "GameL\Audio.h"

//使用するネームスペース
using namespace GameL;

#include "SceneMain.h"
#include "GameHead.h"

//コンストラクタ
CSceneTitle::CSceneTitle()
{

}
//デストラクタ
CSceneTitle::~CSceneTitle()
{

}
//ゲームメイン初期化メソッド
void CSceneTitle::InitScene()
{
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"Title.png", 0, TEX_SIZE_512);

	//タイトルオブジェクト作成
	CObjTitle*obj = new CObjTitle();//タイトルオブジェクト作成
	Objs::InsertObj(obj, OBJ_TITLE, 10);//タイトルオブジェクト登録

	//音楽情報の読み込み
	Audio::LoadAudio(0, L"TitleBGM.wav", SOUND_TYPE::BACK_MUSIC);

	//バックミュージックスタート
	float Volume = Audio::VolumeMaster(-0.0f); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート

	Audio::LoadAudio(1, L"menyu.wav", SOUND_TYPE::EFFECT);

		

}
//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{

}
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
#include "SceneGameClear.h"

//コンストラクタ
CSceneGameClear::CSceneGameClear()
{

}
//デストラクタ
CSceneGameClear::~CSceneGameClear()
{

}
//初期化メソッド
void CSceneGameClear::InitScene()
{
	//音楽情報の読み込み
	Audio::LoadAudio(0, L"7kuchibue.wav", SOUND_TYPE::BACK_MUSIC);

	//バックミュージックスタート
	float Volume = Audio::VolumeMaster(-0.0f); //マスターボリュームを下げない
	Audio::Start(0); //音楽スタート



	//タイトルオブジェクト作成
	CObjGameClear*obj = new CObjGameClear();//ゲームオーバーオブジェクト作成
	Objs::InsertObj(obj, OBJ_GAME_CLEAR, 10);//ゲームオーバーオブジェクト登録



}
//実行中メソッド
void CSceneGameClear::Scene()
{

}
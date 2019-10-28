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
	//音楽情報読み込み
	//Audio::LoadAudio(0, L"TitleBGM.wav", SOUND_TYPE::BACK_MUSIC);

	//バックミュージックスタート
	//float Volume = Audio::VolumeMaster(-0.8f);//マスターボリュームを0.8下げる
	//Audio::Start(0);

	//外部グラフィックファイルを読み込み1番目に登録(512*512)
	//Draw::LoadImage(L"Title.png", 1, TEX_SIZE_512);

	//タイトルオブジェクト作成
	CObjTitle*obj = new CObjTitle();//タイトルオブジェクト作成
	Objs::InsertObj(obj, OBJ_TITLE, 10);//タイトルオブジェクト登録




}
//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{

}
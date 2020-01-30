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
#include"SceneMenu2.h"



//コンストラクタ
CSceneMenu2::CSceneMenu2()
{

}
//デストラクタ
CSceneMenu2::~CSceneMenu2()
{

}
//初期化メソッド
void CSceneMenu2::InitScene()
{
	//外部グラフィックファイルを読み込み0番目に登録(512*512pixel)
	Draw::LoadImage(L"ToukaMenu2.png", 0, TEX_SIZE_512);
	Draw::LoadImage(L"Tips4.png", 1, TEX_SIZE_512);

	Draw::LoadImage(L"Tips.png", 2, TEX_SIZE_512);
	Draw::LoadImage(L"Tips3.png", 3, TEX_SIZE_512);

	//出力させる文字のグラフィックを作成
	Font::SetStrTex(L"MENU");
	Font::SetStrTex(L"所持アイテム確認");
	Font::SetStrTex(L"ゲーム画面に戻る");
	Font::SetStrTex(L"ゲームを終了する");
	Font::SetStrTex(L"→");
	Font::SetStrTex(L"所持アイテムがありません");
	Font::SetStrTex(L"十字架");


	//効果音一覧
	Audio::LoadAudio(1, L"menu2_cansel.wav", SOUND_TYPE::EFFECT);
	Audio::LoadAudio(2, L"menu2_idou.wav", SOUND_TYPE::EFFECT);
	Audio::LoadAudio(3, L"menu2_kettei.wav", SOUND_TYPE::EFFECT);
	Audio::LoadAudio(4, L"menyu.wav", SOUND_TYPE::EFFECT);

	//Menu2オブジェクト
	CObjMenu2*obj_menu = new CObjMenu2();
	Objs::InsertObj(obj_menu, OBJ_MENU2, 1);
}
//実行中メソッド
void CSceneMenu2::Scene()
{

}
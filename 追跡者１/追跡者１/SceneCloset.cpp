//STLデバック機能をOFFにする。
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"
#include "GameL\Audio.h"


//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"SceneCloset.h"
#include"GameHead.h"


//コンストラクタ
CSceneCloset::CSceneCloset()
{
	closetflag = false;
}

CSceneCloset::CSceneCloset(bool check)
{
	closetflag = true;
}

//デストラクタ
CSceneCloset::~CSceneCloset()
{

}

//ゲームメイン初期化メソッド
void CSceneCloset::InitScene()
{
	//メモ入手時の効果音
	Audio::LoadAudio(3, L"itemgetseb .wav", SOUND_TYPE::EFFECT);
	
	Draw::LoadImageW(L"Text3.png", 45, TEX_SIZE_64);

	if (closetflag==true)
	{
		//クローゼットオブジェクト
		CObjCloset*obj_closet = new CObjCloset(closetflag);
		Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);
	}
	else
	{
		//クローゼットオブジェクト
		CObjCloset*obj_closet = new CObjCloset();
		Objs::InsertObj(obj_closet, OBJ_CLOSET, 1);
	}

}

//ゲームメイン実行中メソッド
void CSceneCloset::Scene()
{

}
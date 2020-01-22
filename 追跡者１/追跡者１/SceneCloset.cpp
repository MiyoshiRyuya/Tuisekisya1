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

	//効果音
	/*
	Audio::LoadAudio(1, L"closet SE.wav", SOUND_TYPE::EFFECT);
	float Volume1 = Audio::VolumeMaster(1.0f);
	Audio::Start(0);
	*/
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
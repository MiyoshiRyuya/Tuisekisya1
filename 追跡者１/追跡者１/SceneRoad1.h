#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CSceneRoad1 : public CScene
{
public:
	CSceneRoad1();
	~CSceneRoad1();

	void InitScene(); //セーブ画面の初期化メソッド
	void Scene();     //セーブ画面の実行中メソッド
private:
};
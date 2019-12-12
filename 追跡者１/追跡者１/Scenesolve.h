#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：メニュー画面
class CScenesolve :public CScene
{
public:
	CScenesolve();
	~CScenesolve();

	void InitScene(); //メニュー画面の初期化メゾット
	void Scene();     //メニュー画面の実行中メソッド
private:
};

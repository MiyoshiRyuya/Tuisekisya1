#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：メニュー画面
class CSceneMenu :public CScene
{
public:
	CSceneMenu();
	~CSceneMenu();
	void InitScene(); //メニュー画面の初期化メゾット
	void Scene();     //メニュー画面の実行中メソッド
private:
};
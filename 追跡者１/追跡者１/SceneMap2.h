#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン:マップシーン２
class CSceneMap2 :public CScene
{
public:
	CSceneMap2();
	~CSceneMap2();
	void InitScene();//初期化メソッド
	void Scene();//実行中メソッド
private:
};
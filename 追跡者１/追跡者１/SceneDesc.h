#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン:ゲームタイトル
class CSceneDesc :public CScene
{
public:
	CSceneDesc();
	~CSceneDesc();
	void InitScene();//初期化メソッド
	void Scene();//実行中メソッド
private:
};
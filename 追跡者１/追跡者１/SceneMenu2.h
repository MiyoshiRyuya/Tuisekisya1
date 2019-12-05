#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン:ゲームタイトル
class CSceneMenu2 :public CScene
{
public:
	CSceneMenu2();
	~CSceneMenu2();
	void InitScene();//初期化メソッド
	void Scene();//実行中メソッド
private:
};
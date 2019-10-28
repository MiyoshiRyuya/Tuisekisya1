#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームファイル
using namespace GameL;

//シーン：ゲームアイテム
class CSceneItem :public CScene
{
public:
	CSceneItem();
	~CSceneItem();

	void InitScene(); //ゲームアイテム初期化メソッド
	void Scene();     //ゲームアイテム実行中メソッド
private:
};

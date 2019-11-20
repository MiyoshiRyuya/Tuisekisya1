#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームメイン
class CSceneMap2 :public CScene
{
public:
	CSceneMap2();
	~CSceneMap2();
	void InitScene();//ゲームメインの初期化メソッド
	void Scene();//ゲームメインの実行中メソッド:
private:

};
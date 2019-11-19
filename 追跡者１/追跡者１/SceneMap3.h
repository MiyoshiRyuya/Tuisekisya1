#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームメイン
class CSceneMap3 :public CScene
{
public:
	CSceneMap3();
	~CSceneMap3();
	void InitScene();//ゲームメインの初期化メソッド
	void Scene();//ゲームメインの実行中メソッド:
private:

};
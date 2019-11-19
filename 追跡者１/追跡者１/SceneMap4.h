#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームメイン
class CSceneMap4 :public CScene
{
public:
	CSceneMap4();
	~CSceneMap4();
	void InitScene();//ゲームメインの初期化メソッド
	void Scene();//ゲームメインの実行中メソッド:
private:

};
#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CScenemainSave : public CScene
{
public:
	CScenemainSave();
	~CScenemainSave();

	void InitScene(); //セーブ画面の初期化メソッド
	void Scene();     //セーブ画面の実行中メソッド
private:
};
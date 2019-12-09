#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：メニュー画面
class CSceneCloset :public CScene
{
public:
	CSceneCloset();
	CSceneCloset(bool check);
	~CSceneCloset();

	void InitScene(); //メニュー画面の初期化メゾット
	void Scene();     //メニュー画面の実行中メソッド
private:
	float m_x;
	float m_y;
	bool closetflag;
};

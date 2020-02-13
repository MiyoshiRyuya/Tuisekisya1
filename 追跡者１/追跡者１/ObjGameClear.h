#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//オブジェクト:タイトル
class CObjGameClear :public CObj
{
public:
	CObjGameClear() {};
	~CObjGameClear() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー

private:
	bool flag;
	int time;
};

#pragma once
//使用するネームスペース
#include"GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjDesc :public CObj
{
public:
	CObjDesc() {};
	~CObjDesc() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー

private:
	bool flag;
};
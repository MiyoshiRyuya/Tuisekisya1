#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMap5 : public CObj
{
public:
	CObjMap5() {};
	~CObjMap5() {};
	void Init();
	void Action();
	void Draw();

private:
};
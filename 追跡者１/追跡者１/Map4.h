#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMap4 : public CObj
{
public:
	CObjMap4() {};
	~CObjMap4() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;
	float m_y;
	float ax;
	float ay;
};
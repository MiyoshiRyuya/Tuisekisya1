#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMap3 : public CObj
{
public:
	CObjMap3() {};
	~CObjMap3() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;
	float m_y;
	float v_x;
	float v_y;
	float mx;
	float my;
	float px;
	float py;
	float idouX;
	float idouY;
};
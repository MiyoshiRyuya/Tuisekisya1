#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMain : public CObj
{
public:
	CObjMain() {};
	~CObjMain() {};
	void Init();
	void Action();
	void Draw();

private:
	int m_map[10][10]; //マップ情報
	float m_x;
	float m_y;
};
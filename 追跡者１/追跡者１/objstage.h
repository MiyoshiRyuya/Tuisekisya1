#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

class CObjstage:public CObj
{
public:
	CObjstage(int map[10][13]);
	~CObjstage() {};
	void Init();
	void Action();
	void Draw();



private:
	int m_map[10][13];
	float objb;

	float m_scroll;
};



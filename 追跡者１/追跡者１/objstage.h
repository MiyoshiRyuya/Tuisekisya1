#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

class CObjstage:public CObj
{
public:
	CObjstage() {};
	~CObjstage() {};
	void Init();
	void Action();
	void Draw();


private:
	float m_map[20][20];
	float objb;
};



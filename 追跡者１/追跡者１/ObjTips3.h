#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：惑星
class CObjTips3 :public CObj
{
public:

	CObjTips3() {};
	~CObjTips3() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

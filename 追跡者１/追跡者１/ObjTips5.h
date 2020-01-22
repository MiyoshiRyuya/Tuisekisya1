#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjTips5 :public CObj
{
public:

	CObjTips5() {};
	~CObjTips5() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

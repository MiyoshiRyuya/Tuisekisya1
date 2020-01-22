#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjTips4 :public CObj
{
public:

	CObjTips4() {};
	~CObjTips4() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

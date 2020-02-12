#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：惑星
class CObjTips2 :public CObj
{
public:

	CObjTips2() {};
	~CObjTips2() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

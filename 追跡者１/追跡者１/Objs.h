#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjs :public CObj
{
public:

	CObjs() {};
	~CObjs() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

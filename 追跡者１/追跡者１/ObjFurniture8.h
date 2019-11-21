#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture8 :public CObj
{
public:

	CObjFurniture8() {};
	~CObjFurniture8() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture12 :public CObj
{
public:

	CObjFurniture12() {};
	~CObjFurniture12() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture15 :public CObj
{
public:

	CObjFurniture15() {};
	~CObjFurniture15() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

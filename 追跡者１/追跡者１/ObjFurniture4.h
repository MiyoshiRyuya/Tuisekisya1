#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture4 :public CObj
{
public:

	CObjFurniture4() {};
	~CObjFurniture4() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

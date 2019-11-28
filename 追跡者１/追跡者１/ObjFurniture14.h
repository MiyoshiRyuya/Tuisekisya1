#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture14 :public CObj
{
public:

	CObjFurniture14() {};
	~CObjFurniture14() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

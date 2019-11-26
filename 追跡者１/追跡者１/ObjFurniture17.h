#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture17 :public CObj
{
public:

	CObjFurniture17() {};
	~CObjFurniture17() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture19 :public CObj
{
public:

	CObjFurniture19() {};
	~CObjFurniture19() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

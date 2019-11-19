#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture :public CObj
{
public:

	CObjFurniture() {};
	~CObjFurniture() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

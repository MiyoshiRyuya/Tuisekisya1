#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture18 :public CObj
{
public:

	CObjFurniture18() {};
	~CObjFurniture18() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

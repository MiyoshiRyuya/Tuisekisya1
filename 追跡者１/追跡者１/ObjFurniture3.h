#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture3 :public CObj
{
public:

	CObjFurniture3() {};
	~CObjFurniture3() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};


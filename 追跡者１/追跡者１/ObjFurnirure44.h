#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture44 :public CObj
{
public:

	CObjFurniture44() {};
	~CObjFurniture44() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture16 :public CObj
{
public:

	CObjFurniture16() {};
	~CObjFurniture16() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

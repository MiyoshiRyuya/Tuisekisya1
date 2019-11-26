#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture13 :public CObj
{
public:

	CObjFurniture13() {};
	~CObjFurniture13() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

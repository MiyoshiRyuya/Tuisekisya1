#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture34 :public CObj
{
public:

	CObjFurniture34() {};
	~CObjFurniture34() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

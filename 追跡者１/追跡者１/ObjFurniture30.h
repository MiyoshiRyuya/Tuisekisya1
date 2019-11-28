#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture30 :public CObj
{
public:

	CObjFurniture30() {};
	~CObjFurniture30() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

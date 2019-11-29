#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture28 :public CObj
{
public:

	CObjFurniture28() {};
	~CObjFurniture28() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

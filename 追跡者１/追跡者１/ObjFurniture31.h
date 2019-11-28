#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture31 :public CObj
{
public:

	CObjFurniture31() {};
	~CObjFurniture31() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

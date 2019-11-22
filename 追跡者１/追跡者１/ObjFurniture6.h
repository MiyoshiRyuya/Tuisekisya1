#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture6 :public CObj
{
public:

	CObjFurniture6() {};
	~CObjFurniture6() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

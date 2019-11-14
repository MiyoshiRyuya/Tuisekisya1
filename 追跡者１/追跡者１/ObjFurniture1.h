#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture1 :public CObj
{
public:

	CObjFurniture1() {};
	~CObjFurniture1() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

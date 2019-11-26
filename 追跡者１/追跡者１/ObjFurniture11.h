#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture11 :public CObj
{
public:

	CObjFurniture11() {};
	~CObjFurniture11() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;
};

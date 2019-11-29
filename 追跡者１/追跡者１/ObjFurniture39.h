#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture39 :public CObj
{
public:

	CObjFurniture39() {};
	~CObjFurniture39() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

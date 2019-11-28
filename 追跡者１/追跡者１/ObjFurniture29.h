#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture29 :public CObj
{
public:

	CObjFurniture29() {};
	~CObjFurniture29() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

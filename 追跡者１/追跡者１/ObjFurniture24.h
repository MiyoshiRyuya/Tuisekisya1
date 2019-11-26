#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture24 :public CObj
{
public:

	CObjFurniture24() {};
	~CObjFurniture24() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

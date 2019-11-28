#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture32 :public CObj
{
public:

	CObjFurniture32() {};
	~CObjFurniture32() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

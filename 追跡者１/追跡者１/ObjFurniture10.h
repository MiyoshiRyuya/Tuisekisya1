#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture10 :public CObj
{
public:

	CObjFurniture10() {};
	~CObjFurniture10() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};

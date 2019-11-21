#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：家具
class CObjFurniture7 :public CObj
{
public:

	CObjFurniture7() {};
	~CObjFurniture7() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	

};

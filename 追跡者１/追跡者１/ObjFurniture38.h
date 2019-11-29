#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture38 :public CObj
{
public:

	CObjFurniture38() {};
	~CObjFurniture38() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

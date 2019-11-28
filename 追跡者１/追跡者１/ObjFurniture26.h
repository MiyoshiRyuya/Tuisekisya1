#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture26 :public CObj
{
public:

	CObjFurniture26() {};
	~CObjFurniture26() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

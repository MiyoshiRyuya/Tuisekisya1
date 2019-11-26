#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//オブジェクト：家具
class CObjFurniture20 :public CObj
{
public:

	CObjFurniture20() {};
	~CObjFurniture20() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�Ƌ�
class CObjFurniture43 :public CObj
{
public:

	CObjFurniture43() {};
	~CObjFurniture43() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

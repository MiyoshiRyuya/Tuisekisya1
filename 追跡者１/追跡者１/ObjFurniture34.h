#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�Ƌ�
class CObjFurniture34 :public CObj
{
public:

	CObjFurniture34() {};
	~CObjFurniture34() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

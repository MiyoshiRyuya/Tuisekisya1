#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�Ƌ�
class CObjFurniture42 :public CObj
{
public:

	CObjFurniture42() {};
	~CObjFurniture42() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�Ƌ�
class CObjTips1 :public CObj
{
public:

	CObjTips1() {};
	~CObjTips1() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;
};

#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�Ƌ�
class CObjTips5 :public CObj
{
public:

	CObjTips5() {};
	~CObjTips5() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

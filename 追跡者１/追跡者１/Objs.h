#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�Ƌ�
class CObjs :public CObj
{
public:

	CObjs() {};
	~CObjs() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

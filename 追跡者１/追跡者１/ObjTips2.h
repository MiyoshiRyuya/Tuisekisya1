#pragma once
#include"GameL\SceneObjManager.h"

using namespace GameL;

//�I�u�W�F�N�g�F�f��
class CObjTips2 :public CObj
{
public:

	CObjTips2() {};
	~CObjTips2() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_px;
	float m_py;
};

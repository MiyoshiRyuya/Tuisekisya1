#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：トラップ
class CObjtrap2 :public CObj
{
public:

	CObjtrap2() {};
	~CObjtrap2() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};
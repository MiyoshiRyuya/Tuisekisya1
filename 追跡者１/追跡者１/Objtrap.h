#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：トラップ
class CObjtrap :public CObj
{
public:

	CObjtrap() {};
	~CObjtrap() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};
#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：トラップ
class CObjtrap1 :public CObj
{
public:

	CObjtrap1() {};
	~CObjtrap1() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

};
#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：敵
class CObjEnemy :public CObj
{
public:
	CObjEnemy() {};
	~CObjEnemy() {};
	void Init();
	void Action();
	void Draw();
private:

	float m_x;
	float m_y;
	float m_vx;
	float m_vy;
	float m_posture;

	float m_speed_power;

	bool m_hit_up;
	bool m_hit_down;
	bool m_hit_left;
	bool m_hit_right;
};
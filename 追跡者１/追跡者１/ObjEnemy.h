#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//�I�u�W�F�N�g�F�G
class CObjEnemy :public CObj
{
public:
	
	CObjEnemy() {};
	~CObjEnemy() {};
	void Init();
	void Action();
	void Draw();
private:

	float x;
	float y;

	float m_ex; 
	float m_ey; 
	float m_vx;
	float m_vy;
	float m_x;
	float m_y;
	float m_posture;
	float m_len;

	float m_speed_power;
	float m_ani_max_time;//�A�j���[�V��������Ԋu�ő�l

	int m_ani_time;//�A�j���[�V�����t���[������Ԋu
	int m_ani_frame;//�`��t���[��

};
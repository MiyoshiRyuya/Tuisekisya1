#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g:��l��
class CObjHero :public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init();//�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();//�h���[

	float GetX() { return m_px; }
	float GetY() { return m_py; }


private:
		float m_x;
		float m_y;
		float m_px;
		float m_py;
		float m_vx;
		float m_vy;
		float m_posture;
		float m_mos_x; //�}�E�XX���W
		float m_mos_y; //�}�E�XY���W
};

#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[��
class CObjsolve : public CObj
{
public:
	CObjsolve() {};
	~CObjsolve() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;
	int time;
};
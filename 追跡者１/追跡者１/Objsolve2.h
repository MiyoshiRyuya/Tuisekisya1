#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[��
class CObjsolve2 : public CObj
{
public:
	CObjsolve2(float x, float y) ;
	~CObjsolve2() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	float m_px;
	float m_py;
};
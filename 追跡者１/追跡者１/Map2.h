#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjMap2 : public CObj
{
public:
	CObjMap2() {};
	~CObjMap2() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;//�֎q
	float m_y;
	float ax;//��
	float ay;
	float kx;//�A��
	float ky;
	float bx;//��
	float by;
};
#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F�Z�[�u���
class CObjCloset : public CObj
{
public:
	CObjCloset() {};
	CObjCloset(bool closetflag) { flag = closetflag; };
	~CObjCloset() {};

	void Init();
	void Action();
	void Draw();
	int m_time;  //���Ԑ���
	
private:
	float m_x;
	float m_y;
	float v_x;
	float v_y;
	bool flag;
};
#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g
class CObjMap5 : public CObj
{
public:
	CObjMap5() {};
	~CObjMap5() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;
	float m_y;
	float m_xx; //�o��
	float m_yy;

};
#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjMap4 : public CObj
{
public:
	CObjMap4() {};
	~CObjMap4() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;
	float m_y;
	float ax;
	float ay;
};
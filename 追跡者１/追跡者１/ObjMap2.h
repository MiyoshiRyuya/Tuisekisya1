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
	int m_map[10][10]; //�}�b�v���
	float m_x;
	float m_y;
};
#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjMain : public CObj
{
public:
	CObjMain() {};
	~CObjMain() {};
	void Init();
	void Action();
	void Draw();

private:
	int m_map[10][10]; //�}�b�v���
	float m_x;
	float m_y;
};
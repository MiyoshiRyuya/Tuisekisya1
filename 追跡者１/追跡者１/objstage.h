#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

class CObjstage:public CObj
{
public:
	CObjstage(int map[10][13]);
	~CObjstage() {};
	void Init();
	void Action();
	void Draw();



private:
	int m_map[10][13];
	float objb;

	float m_scroll;
};



#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

class CObjstage:public CObj
{
public:
	CObjstage(int map[20][20]);
	~CObjstage() {};
	void Init();
	void Action();
	void Draw();


private:
	float m_map[20][20];
	float objb;

	float m_scroll;
};



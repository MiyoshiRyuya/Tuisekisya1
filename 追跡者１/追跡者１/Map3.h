#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjMap3 : public CObj
{
public:
	CObjMap3() {};
	~CObjMap3() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;
	float m_y;
	float v_x;
	float v_y;
	float mx;
	float my;
	float px;
	float py;
	float idouX;
	float idouY;
};
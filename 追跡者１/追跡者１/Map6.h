#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjMap6 : public CObj
{
public:
	CObjMap6() {};
	~CObjMap6() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x; //�Ǘp
	float m_y;
	float hon_x; //�{�I�����тP�p
	float hon_y;
};
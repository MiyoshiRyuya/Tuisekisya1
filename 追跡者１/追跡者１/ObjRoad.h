#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F�Z�[�u���
class CObjRoad : public CObj
{
public:
	CObjRoad() {};
	~CObjRoad() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_mou_x; //�}�E�X�̈ʒuX 
	float m_mou_y; //�}�E�X�̈ʒuY
	bool  m_mou_r; //�}�E�X�̉E�{�^��
	bool  m_mou_l; //�}�E�X�̍��{�^��
	int m_time;    //�}�E�X���Ԑ���p
};
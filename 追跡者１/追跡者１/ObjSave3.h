#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F�Z�[�u���
class CObjSave3 : public CObj
{
public:
	CObjSave3() {};
	~CObjSave3() {};

	void Init();
	void Action();
	void Draw();
	int m_time;  //���Ԑ���
private:
	float m_mou_x; //�}�E�X�̈ʒuX 
	float m_mou_y; //�}�E�X�̈ʒuY
	bool  m_mou_r; //�}�E�X�̉E�{�^��
	bool  m_mou_l; //�}�E�X�̍��{�^��


};
#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g:�^�C�g��
class CObjGameOver :public CObj
{
public:
	CObjGameOver() {};
	~CObjGameOver() {};
	void Init();//�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();//�h���[

private:
	float m_mou_x;//�}�E�X�̈ʒuX
	float m_mou_y;//�}�E�X�̈ʒuY
	bool m_mou_r;//�}�E�X�̉E�{�^��
	bool m_mou_l;//�}�E�X�̍��{�^��

};

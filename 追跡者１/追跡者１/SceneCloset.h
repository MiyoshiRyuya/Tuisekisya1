#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F���j���[���
class CSceneCloset :public CScene
{
public:
	CSceneCloset();
	CSceneCloset(bool check);
	~CSceneCloset();

	void InitScene(); //���j���[��ʂ̏��������]�b�g
	void Scene();     //���j���[��ʂ̎��s�����\�b�h
private:
	float m_x;
	float m_y;
	bool closetflag;
};

#pragma once
//�g�p����w�b�_�[�t�@�C��
#include "GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g:��l��
class CObjHeroMove :public CObj
{
public:
	CObjHeroMove() {};
	~CObjHeroMove() {};
	void Init();//�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();//�h���[

private:
	float KEY_INPUT_RIGHT;
	float KEY_INPUT_LEFT;
	float KEY_INPUT_UP;
	float KEY_INPUT_DOWN;
	
	float m_x;
	float m_y;
	float v_y;
	float v_x;

	



};

 
#pragma once
//�g�p����l�[���X�y�[�X
#include"GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�^�C�g��
class CObjDesc :public CObj
{
public:
	CObjDesc() {};
	~CObjDesc() {};
	void Init();   //�C�j�V�����C�Y
	void Action(); //�A�N�V����
	void Draw();   //�h���[

private:
	bool flag;
};
#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�u���b�N���w�i
class CObjMenu2 : public CObj
{
public:
	CObjMenu2() {};
	~CObjMenu2() {};
	void Init();
	void Action();
	void Draw();

private:
	int Cross; //�\���˂̎擾���m�F�p
	int Item;  //Item�m�F��ʕϊ��p
	int Migi;  //������ʃJ�[�\�������p
	int Migi2; //GameOver�I����ʃJ�[�\�������p
	int Migi3; //Item�m�F��ʃJ�[�\�������p
	int Migi4; //Item�I����ʃJ�[�\�������p
	int GameOver; //game�I���̍ŏI�m�F�p
	int ItemKN; //�A�C�e���m�F
	int oto;   //��
	int time;  //����
}; 
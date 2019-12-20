//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"ObjHero.h"
#include "GameHead.h"
#include "ObjCloset.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;
bool Memo3flag = false;
extern bool Memoflag2;
//�C�j�V�����C�Y
void CObjCloset::Init()
{
	m_x = 20;
	m_y = 0;
	v_x = 0;
	v_y = 0;
	m_px = 0;
	m_py=0;

	Hits::SetHitBox(this, m_x, m_y, 160, 130, ELEMENT_RED, OBJ_CLOSET, 11);
}



//�A�N�V����
void CObjCloset::Action()
{

	if (flag == true)
	{
		if (Memoflag2 == true)
		{
			if (Input::GetVKey(VK_RETURN) == true)
			{

				Memo3flag = true;
			}
		}
		//E�{�^���������ƃQ�[����ʂɈړ�����
		if (Input::GetVKey('E') == true)
		{

			Scene::SetScene(new CSceneMap3());
		}
	}
}


//�h���[
void CObjCloset::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 500.0f;
	src.m_bottom = 100.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 120.0f;
	dst.m_left = 60.0f;
	dst.m_right = 122.0f;
	dst.m_bottom = 150.0f;

	//�`��
	Draw::Draw(11, &src, &dst, c, 0.0f);
}
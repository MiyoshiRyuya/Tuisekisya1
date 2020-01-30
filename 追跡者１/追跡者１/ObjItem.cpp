//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"
#include"GameL/HitBoxManager.h"
#include "ObjHero.h"
#include "GameHead.h"
#include "ObjItem.h"
#include "ObjMenu2.h"
#include "GameL\Audio.h"
#include<Windows.h>



//�g�p����l�[���X�y�[�X
using namespace GameL;

bool deleteflag = false;
bool Textflag4 = false;
extern bool Memo3flag;


//�R���X�g���N�^
CObjItem::CObjItem(float x, float y)
{
	m_px = x;
	m_py = y;
}


//�C�j�V�����C�Y
void CObjItem::Init()
{
	bool flag= CObjHero::Getflag();
	Hits::SetHitBox(this, m_px, m_py, 64, 64, ELEMENT_ITEM, OBJ_ITEM, 1);

	if (deleteflag==true&&flag==true)
	{
		this->SetStatus(false);   //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
	}
}

//�A�N�V����
void CObjItem::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);

	if (Textflag4 == true)
	{
		Sleep(3000);

		this->SetStatus(false);   //���g�ɍ폜���߂��o���B
		//Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
	}

	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			if ( Memo3flag==true)
			{
				Audio::Start(4);
				Textflag4 = true;
				deleteflag = true;
			}
		}
	}	
}


//�h���[
void CObjItem::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right = 64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	Draw::Draw(12, &src, &dst, c, 0.0f);


	if (Textflag4 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 230.0f;
		dst.m_left = 300.0f;
		dst.m_right = 556.0f;
		dst.m_bottom = 456.0f;

		Draw::Draw(30, &src, &dst, c, 0.0f);
	}
}
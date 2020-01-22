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

//�g�p����l�[���X�y�[�X
using namespace GameL;

bool deleteflag = false;
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
	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			if ( Memo3flag==true)
			{
				Audio::Start(1);

				deleteflag = true;
				this->SetStatus(false);   //���g�ɍ폜���߂��o���B
				Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
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

}
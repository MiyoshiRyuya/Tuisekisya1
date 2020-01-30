#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTips1.h"
#include<Windows.h>

using namespace GameL;
bool Memoflag1 = false;
bool Textflag1 = false;
void CObjTips1::Init()
{
	m_x = 360;
	m_y = 540;
	Hits::SetHitBox(this, m_x, m_y, 64, 64, ELEMENT_PURPLE, OBJ_HERO, 1);

	if (Memoflag1 == true)
	{
		this->SetStatus(false);   //自身に削除命令を出す。
		Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
	}
}

void CObjTips1::Action()
{



	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	if (Textflag1 == true)
	{
		Sleep(3000);

		this->SetStatus(false);   //自身に削除命令を出す。
		//Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。

	}

	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			Audio::Start(3);

			Memoflag1 = true;
			Textflag1 = true;
		}
	}
}

void CObjTips1::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 52.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 52.0f + m_x;
	dst.m_bottom = 48.0f + m_y;

	Draw::Draw(30, &src, &dst, c, 0.0f);

	if (Textflag1==true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 230.0f ;
		dst.m_left = 300.0f ;
		dst.m_right = 556.0f ;
		dst.m_bottom = 456.0f ;

		Draw::Draw(35, &src, &dst, c, 0.0f);
	}
}
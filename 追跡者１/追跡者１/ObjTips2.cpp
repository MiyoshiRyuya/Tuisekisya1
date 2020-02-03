#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTips1.h"

using namespace GameL;
bool Memoflag2 = false;
bool Textflag2 = false;
extern bool Memoflag1;
extern bool Tipsflag;

void CObjTips2::Init()
{
	m_px = 640;
	m_py = 480;
	Hits::SetHitBox(this, m_px + 64, m_py + 64, 64, 50, ELEMENT_GREEN, OBJ_TIPS2, 1);

	if (Memoflag2 == true)
	{
		this->SetStatus(false);   //自身に削除命令を出す。
		Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
	}
}

void CObjTips2::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);

	//メモ2取得時　時間を2秒止める
	if (Textflag2 == true)
	{
		Sleep(1500);
		this->SetStatus(false);   //自身に削除命令を出す。
		//Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
	}

	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		//メモ1を持ちながらTipsフラグを持っているならメモ2取得
		if (Input::GetVKey(VK_RETURN) == true)
		{
			if (Memoflag1 == true&&Tipsflag==true)
			{
				Audio::Start(3);

				Memoflag2 = true;
				Textflag2 = true;
			}
		}
	}
}

void CObjTips2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

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

	//Eartth
	Draw::Draw(31, &src, &dst, c, 0.0f);

	if (Textflag2 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 230.0f;
		dst.m_left = 300.0f;
		dst.m_right = 556.0f;
		dst.m_bottom = 456.0f;

		Draw::Draw(40, &src, &dst, c, 0.0f);
	}
}
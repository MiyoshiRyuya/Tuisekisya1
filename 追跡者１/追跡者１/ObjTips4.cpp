#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjTips4.h"

using namespace GameL;
extern bool Memoflag1;
extern bool Tipsflag;
bool Textflag6 = false;

void CObjTips4::Init()
{

	m_px = 500;
	m_py = 360;
	Hits::SetHitBox(this, m_px + 64, m_py + 64, 64, 50, ELEMENT_GREEN, OBJ_TIPS4, 1);
}

void CObjTips4::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);

	if (Textflag6 == true)
	{
		Sleep(1000);
		Scene::SetScene(new CSceneGameOver());

		this->SetStatus(false);   //自身に削除命令を出す。
		//Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
	}

	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			if (Memoflag1 == true && Tipsflag == true)
			{
				Audio::Start(6);

				Textflag6 = true;
			}
		}
	}
}

void CObjTips4::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;

	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right = 64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	//Skysomething
	Draw::Draw(34, &src, &dst, c, 0.0f);

	if (Textflag6 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 230.0f;
		dst.m_left = 300.0f;
		dst.m_right = 556.0f;
		dst.m_bottom = 456.0f;

		Draw::Draw(42, &src, &dst, c, 0.0f);
	}
}
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "ObjItem.h"

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjItem::CObjItem(float x, float y)
{
	m_px = x;
	m_py = y;
}

//イニシャライズ
void CObjItem::Init()
{
	Hits::SetHitBox(this, m_px, m_py, 64, 64, ELEMENT_ITEM, OBJ_ITEM, 1);
	
}

//アクション
void CObjItem::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);
	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			this->SetStatus(false);   //自身に削除命令を出す。
			Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
		}
	}
}



//ドロー
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
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"ObjHero.h"
#include "GameHead.h"
#include "Objsolve2.h"

//使用するネームスペース
using namespace GameL;

bool deleteflag2 = false;

CObjsolve2::CObjsolve2(float x, float y)
{
	m_px = x;
	m_py = y;
}

//イニシャライズ
void CObjsolve2::Init()
{
	bool flag = CObjHero::Getflag();
	Hits::SetHitBox(this, m_px, m_py, 64, 64, ELEMENT_SOLVE, OBJ_SOLVE2, 1);
	if (deleteflag2 == true && flag == true)
	{
		this->SetStatus(false);   //自身に削除命令を出す。
		Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
	}

	m_x = 0.0f;
	m_y = 0.0f;
}

//アクション
void CObjsolve2::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px, m_py);
	if (hit->CheckElementHit(ELEMENT_PLAYER) == true)
	{
		if (Input::GetVKey(VK_RETURN) == true)
		{
			deleteflag2 = true;
			this->SetStatus(false);   //自身に削除命令を出す。
			Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。
		}
	}

	//Eボタンを押すとゲーム画面に移動する
	if (Input::GetVKey('E') == true)
	{
		Scene::SetScene(new CSceneMain());
	}

}

//ドロー
void CObjsolve2::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	//表示位置の設定
	dst.m_top = 0.0f + m_py;
	dst.m_left = 0.0f + m_px;
	dst.m_right =64.0f + m_px;
	dst.m_bottom = 64.0f + m_py;

	//一番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(50, &src, &dst, c, 0.0f);
}


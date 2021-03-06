//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"
#include"GameL\Audio.h"

#include"ObjHero.h"
#include "GameHead.h"
#include "ObjCloset.h"
#include "GameL\Audio.h"

//使用するネームスペース
using namespace GameL;
//イニシャライズ

void CObjCloset::Init()
{
	time = 0;
	m_x = 20;
	m_y = 0;
	v_x = 0;
	v_y = 0;
	m_px = 0;
	m_py=0;
	//当たり判定
	Hits::SetHitBox(this, m_x, m_y, 160, 130, ELEMENT_RED, OBJ_CLOSET, 11);
}



//アクション
void CObjCloset::Action()
{
	if (flag == true)
	{
		CHitBox*hit = Hits::GetHitBox(this);
		if (Input::GetVKey(VK_RETURN) == false)
		{
			time = 10;
		}
	
		if (time == 10)
		{
			//Eボタンを押すとゲーム画面に移動する
			if (Input::GetVKey(VK_RETURN) == true)
			{
				Scene::SetScene(new CSceneMap3());
				time = 0;
			}
		}
	}
}


//ドロー
void CObjCloset::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 500.0f;
	src.m_bottom = 100.0f;

	//表示位置の設定
	dst.m_top = 120.0f;
	dst.m_left = 60.0f;
	dst.m_right = 122.0f;
	dst.m_bottom = 150.0f;

	//描画
	Draw::Draw(11, &src, &dst, c, 0.0f);
}
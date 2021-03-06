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
#include"Objtest.h"

//使用するネームスペース
using namespace GameL;
bool Memo3flag = false;
bool Textflag3 = false;
extern bool Memoflag2;
//イニシャライズ
void CObjtest::Init()
{
	m_x = 20;
	m_y = 0;
	v_x = 0;
	v_y = 0;
	m_px = 0;
	m_py = 0;

	Hits::SetHitBox(this, m_x, m_y, 160, 130, ELEMENT_RED, OBJ_CLOSET, 11);
}



//アクション
void CObjtest::Action()
{

	//メモ2取得時　時間を2秒止める
	if (Textflag3 == true)
	{
		Sleep(1500);
		this->SetStatus(false);   //自身に削除命令を出す。
		
	}

	if (Memoflag2 == true)
	{
		//メモ2を持ちながらクローゼットの中でQを押すとメモ3取得
		if (Input::GetVKey('Q') == true)
		{
			Audio::Start(3);

			Memo3flag = true;
			Textflag3 = true;
		}
	}
}


//ドロー
void CObjtest::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 256.0f;
	src.m_bottom = 256.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 64.0f;

	//描画
	Draw::Draw(46, &src, &dst, c, 0.0f);

	if (Textflag3 == true)
	{
		src.m_top = 0.0f;
		src.m_left = 0.0f;
		src.m_right = 256.0f;
		src.m_bottom = 256.0f;

		dst.m_top = 180.0f;
		dst.m_left = 250.0f;
		dst.m_right = 536.0f;
		dst.m_bottom = 436.0f;

		Draw::Draw(45, &src, &dst, c, 0.0f);
	}
}
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"

#include "GameHead.h"
#include "Objsolve.h"

//使用するネームスペース
using namespace GameL;



//イニシャライズ
void CObjsolve::Init()
{
	m_x = 0.0f;
	m_y = 0.0f;
}

//アクション
void CObjsolve::Action()
{
	time++;

	if (time >= 10)
	{
		//Eボタンを押すとゲーム画面に移動する
		if (Input::GetVKey(VK_RETURN) == true)
		{
			Scene::SetScene(new CSceneMain());
			time = 0;
		}
	}
}

//ドロー
void CObjsolve::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top    = 0.0f;
	src.m_left   = 0.0f;
	src.m_right  = 512.0f;
	src.m_bottom = 512.0f;

	//表示位置の設定
	dst.m_top    = 50.0f + m_y;
	dst.m_left   = 200.0f + m_x;
	dst.m_right  = 600.0f + m_x;
	dst.m_bottom = 450.0f + m_y;

	//一番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
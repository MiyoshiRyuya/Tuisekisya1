//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"

#include "GameHead.h"
#include "SceneTo solve mystery.h"

//使用するネームスペース
using namespace GameL;



//イニシャライズ
void CObjTosolvemystery::Init()
{
	
}

//アクション
void CObjTosolvemystery::Action()
{

}

//ドロー
void CObjTosolvemystery::Draw()
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
	dst.m_top = 100.0f + m_y;
	dst.m_left = 110.0f + m_x;
	dst.m_right = 330.0f + m_x;
	dst.m_bottom = 320.0f + m_y;

	//一番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
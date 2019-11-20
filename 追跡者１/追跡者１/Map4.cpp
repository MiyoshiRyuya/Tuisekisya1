//ここにマップ名書いてください

//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "Map4.h"
#include "ObjHero.h"
#include "Objtrap.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjMap4::Init()
{
	m_x = 300;
	m_y = 100;

	//Hits::SetHitBox(this, m_x + 10, m_y + 10, 32, 32, ELEMENT_BLUE, OBJ_MAP4, 3);

}

//アクション
void CObjMap4::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);

}

//ドロー
void CObjMap4::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //描画元切り取り位置
	RECT_F dst; //描画先表示位置

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 600.0f;
	src.m_bottom = 500.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	//描画
	Draw::Draw(2, &src, &dst, c, 0.0f);

}
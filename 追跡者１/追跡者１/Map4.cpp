//ここにマップ名書いてください
//Kitcen

//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"
#include "GameL\Audio.h"

#include "GameHead.h"
#include "Map4.h"
#include "ObjHero.h"
//#include "Objtrap.h"




//使用するネームスペース
using namespace GameL;

extern float genzaiti; //現在地

//イニシャライズ
void CObjMap4::Init()
{
	
	m_x = 371;
	m_y = 0;

	


	//移動関連
	Hits::SetHitBox(this, m_x + 10, m_y + 10, 0, 0, ELEMENT_BLUE, OBJ_MAP4, 3);
	Hits::SetHitBox(this, m_x + 10, m_y + 10, 50, 50, ELEMENT_RED, OBJ_MOVE4, 3);

	
}

//アクション
void CObjMap4::Action()
{

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x + 10, m_y + 10);
	
	genzaiti = 4;
	
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



	src.m_top = 0.0f;
	src.m_left = 64.0f;
	src.m_right = 64.0f;
	src.m_bottom = 45.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(4, &src, &dst, c, 0.0f);//飛ぶ芋虫

	

	src.m_top = 0.0f;
	src.m_left = 96.0f;
	src.m_right = 64.0f;
	src.m_bottom = 45.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 84.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 40.0f + m_y;

	Draw::Draw(10, &src, &dst, c, 0.0f);//鏡
	

/*	src.m_top = 0.0f;
	src.m_left = 96.0f;
	src.m_right = 64.0f;
	src.m_bottom = 45.0f;

	dst.m_top = 0.0f + m_y;
	dst.m_left = 64.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 64.0f + m_y;

	Draw::Draw(50, &src, &dst, c, 0.0f);//謎解きヒント*/
}
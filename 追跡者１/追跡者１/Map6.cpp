//書斎

//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "Map6.h"
#include "ObjHero.h"
#include "Objtrap.h"

//使用するネームスペース
using namespace GameL;

extern float g_Xz;
extern float g_Yz;

extern float genzaiti; //現在地

//イニシャライズ
void CObjMap6::Init()
{
	m_x = 0;
	m_y = 0;
	hon_x = 200;
	hon_y = 240;
	
	Hits::SetHitBox(this, m_x, m_y, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 1);
	Hits::SetHitBox(this, m_x += 200, m_y += 240, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);
	Hits::SetHitBox(this, m_x += 200, m_y, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);
	Hits::SetHitBox(this, m_x += 200, m_y, 50, 250, ELEMENT_GREEN, OBJ_MAP6, 1);
	Hits::SetHitBox(this, m_x -= 600, m_y += 60, 64, 100, ELEMENT_WHITE, OBJ_MOVE1, 1);
}

//アクション
void CObjMap6::Action()
{
	/*CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr) {
		if (Input::GetVKey(VK_RETURN) ==true){
			this->SetStatus(false);
			Hits::DeleteHitBox(this);

			//g_Xz = 400;
			//g_Yz = 300;

			Scene::SetScene(new CSceneMap5());
		}

	}

	/*if (hit->CheckObjNameHit(OBJ_HERO) != nullptr) {
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
		
		g_Xz = 400;
		g_Yz = 300;
	}*/
	genzaiti = 6;
}

//ドロー
void CObjMap6::Draw()
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

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 728.0f;
	src.m_bottom = 100.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 110.0f;

	//描画
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//本棚横並び描画
	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 50.0f;
	src.m_bottom = 295.0f;
	dst.m_top = 240.0f;
	dst.m_left = 200.0f;
	dst.m_right = 250.0f;
	dst.m_bottom = 540.0f;

	//描画
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//本棚横並び2描画
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 50.0f;
	src.m_bottom = 295.0f;
	dst.m_top = 240.0f;
	dst.m_left = 400.0f;
	dst.m_right = 450.0f;
	dst.m_bottom = 540.0f;

	//描画
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//本棚横並び2描画
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 50.0f;
	src.m_bottom = 295.0f;
	dst.m_top = 240.0f;
	dst.m_left = 600.0f;
	dst.m_right = 650.0f;
	dst.m_bottom = 540.0f;

	//描画
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//本棚横並び2描画
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 50.0f;
	src.m_bottom = 295.0f;
	dst.m_top = 240.0f;
	dst.m_left = 600.0f;
	dst.m_right = 650.0f;
	dst.m_bottom = 540.0f;

	//描画
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//カーペット（マップ移動用）
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 100.0f;
	src.m_bottom = 96.0f;
	dst.m_top = 300.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 400.0f;

	//描画
	Draw::Draw(11, &src, &dst, c, 0.0f);

}
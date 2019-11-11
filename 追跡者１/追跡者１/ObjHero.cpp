//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjHero.h"
#include "ObjMenu.h"
#include "Objtrap.h"

//hyhefgyseg
//使用するネームスペース
using namespace GameL;

float g_Xz=70;
float g_Yz=70;

//イニシャライズ
void CObjHero::Init()
{

	m_px = g_Xz;//位置
	m_py = g_Yz;
	m_vx;//移動ベクトル
	m_vy;
	m_hidari;//左向き
	m_ue;//上
	m_sita = 1;//下
	m_migi;//右
	m_mos_x = 0.0f;
	m_mos_y = 0.0f;

	//stageとの消灯確認用
	m_hit_up = false;
	m_hit_down = false;
	m_hit_left = false;
	m_hit_right = false;

	Hits::SetHitBox(this, m_vx, m_vy, 40, 64, ELEMENT_PLAYER, OBJ_HERO, 1);

}

//アクション
void CObjHero::Action()
{
	//移動ベクトルの破棄
	m_vx = 0.0f;
	m_vy = 0.0f;

	/*if (m_x < -1 && m_y < -1) {
		m_x = 0.0f;
		m_y = 0.0f;
	}*/

	m_x = m_px;
	m_y = m_py;

	//	現在の位置を保存する
	g_Xz = m_x;
	g_Yz = m_y;

	//Enterキーを押すと前の物を調べる
//	if(Input::GetVKey())

	//Eボタンを押すとゲーム画面に移動する
	if (Input::GetVKey('M') == true)
	{
		Scene::SetScene(new CSceneMenu());
	}

	//キーの入力方向
	if (Input::GetVKey('D') == true)
	{
		m_migi = 1;
		m_sita = 0;
		m_ue = 0;
		m_hidari = 0;
		m_vx += 5.0f;
	}

	if (Input::GetVKey('A') == true)
	{
		m_hidari = 1;
		m_ue = 0;
		m_sita = 0;
		m_migi = 0;
		m_vx -= 5.0f;
	}

	if (Input::GetVKey('W') == true)
	{
		m_ue = 1.0f;
		m_sita = 0;
		m_migi = 0;
		m_hidari = 0;
		m_vy -= 5.0f;
	}

	if (Input::GetVKey('S') == true)
	{
		m_sita = 1;
		m_ue = 0;
		m_migi = 0;
		m_hidari = 0;
		m_vy += 5.0f;
	}

	if (m_vx + 32.0f > 800.0f)
	{
		m_vx = 800.0f - 32.0f;
	}

	//Mキーを押すと	メニュー画面に移動する
	if (Input::GetVKey('M') == true)
	{
		Scene::SetScene(new CSceneMenu());
	}



	//位置の更新
	m_px += m_vx;
	m_py += m_vy;

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_px + 25, m_py);

	//敵オブジェクトと接触したら主人公削除
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);

		g_Xz = 70;
		g_Yz = 70;

		if (hit->CheckObjNameHit(OBJ_TRAP) != nullptr)
		{
			this->SetStatus(false);
			Hits::DeleteHitBox(this);
		}

	
		//トラップオブジェクトと接触したら主人公削除
		if (hit->CheckObjNameHit(OBJ_TRAP) != nullptr)
		{
			this->SetStatus(false);
			Hits::DeleteHitBox(this);


			Scene::SetScene(new CSceneGameOver());
		}

		//主人公消滅でシーンをゲームオーバー画面に移行する
		Scene::SetScene(new CSceneGameOver());

	}
}

//ドロー
void CObjHero::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };


	RECT_F src;
	RECT_F dst;

	if (m_ue == 1) {
		src.m_top = 385.0f;
		src.m_left = 180.0f;
		src.m_right = 320.0f;
		src.m_bottom = 512.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (m_migi == 1) {
		src.m_top = 255.0f;
		src.m_left = 180.0f;
		src.m_right = 320.0f;
		src.m_bottom = 385.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (m_hidari == 1) {
		src.m_top = 130.0f;
		src.m_left = 180.0f;
		src.m_right = 320.0f;
		src.m_bottom = 255.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (m_sita == 1) {
		src.m_top = 0.0f;
		src.m_left = 180.0f;
		src.m_right = 320.0f;
		src.m_bottom = 130.0f;

		dst.m_top = 0.0f + m_py;
		dst.m_left = 0.0f + m_px;
		dst.m_right = 64.0f + m_px;
		dst.m_bottom = 64.0f + m_py;

		Draw::Draw(0, &src, &dst, c, 0.0f);
	}
}

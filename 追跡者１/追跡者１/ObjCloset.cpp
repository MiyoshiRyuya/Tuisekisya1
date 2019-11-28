//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "ObjCloset.h"

//使用するネームスペース
using namespace GameL;



//イニシャライズ
void CObjCloset::Init()
{
	m_x = 0;
	m_y = 0;

	Hits::SetHitBox(this, m_x, m_y, 800, 110, ELEMENT_WHITE, OBJ_MAP3, 11);
}

//アクション
void CObjCloset::Action()
{
	//Eボタンを押すとゲーム画面に移動する
	if (Input::GetVKey('E') == true)
	{
		Scene::SetScene(new CSceneMain());
	}

	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr) 
    {

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
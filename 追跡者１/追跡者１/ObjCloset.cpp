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
	Hits::SetHitBox(this, m_x, m_y, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 11);

		//Eボタンを押すとゲーム画面に移動する
		if (Input::GetVKey('E') == true)
		{
			Scene::SetScene(new CSceneMain());
		}
}

//アクション
void CObjMap6::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr) {

	}
}


//ドロー
void CObjCloset::Draw()
{

}
//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"
#include "SceneItem.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjEquipped.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjEquipped::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	m_x = 0.0f;
	m_y = 0.0f;
}

//アクション
void CObjEquipped::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 510 && m_mou_x < 680 && m_mou_y>440 && m_mou_y < 480)
	{
		//マウスの左が押されたらアイテム画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneItem());
		}
	}


}

//ドロー
void CObjEquipped::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top    = 0.0f;
	src.m_left   = 0.0f;
	src.m_right  = 64.0f;
	src.m_bottom = 64.0f;

	//表示位置の設定
	dst.m_top = 100.0f + m_y;
	dst.m_left = 110.0f + m_x;
	dst.m_right = 330.0f + m_x;
	dst.m_bottom = 320.0f + m_y;



	//装備画面表示
	Font::StrDraw(L"催涙スプレー", 420, 100, 46, c);

	Font::StrDraw(L"敵の動きを三秒ほど", 340, 150, 46, c);

	Font::StrDraw(L"止めることができる", 340, 200, 46, c);

	Font::StrDraw(L"装備しないと使えない", 340, 260, 46, c);
	//装備しますか表示
	Font::StrDraw(L"装備しますか？", 250, 350, 46, c);
	//はい　いいえ表示
	Font::StrDraw(L"はい　　　　いいえ", 130, 440, 64, c);

	//一番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
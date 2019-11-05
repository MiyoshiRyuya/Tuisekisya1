//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\DrawTexture.h"
#include "SceneItem.h"

#include "SceneMenu.h"
#include "GameHead.h"
#include "ObjEquipped2.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjEquipped2::Init()
{
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
}

//アクション
void CObjEquipped2::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 150 && m_mou_x < 210 && m_mou_y>100 && m_mou_y < 120)
	{
		//マウスの左が押されたらタイトル画面に移動する
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneItem());
		}
	}


}

//ドロー
void CObjEquipped2::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;

	/*表示位置の設定
	dst.m_top = 0.0f + m_y;
	dst.m_left = 0.0f + m_x;
	dst.m_right = 64.0f + m_x;
	dst.m_bottom = 64.0f + m_y;
	*/
	//マウス表示位置
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	//マウスのボタンの状態
	if (m_mou_r == true)
		Font::StrDraw(L"R=押している", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=押していない", 20, 30, 12, c);

	if (m_mou_l == true)
		Font::StrDraw(L"L=押している", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=押していない", 20, 40, 12, c);

	//装備画面表示
	Font::StrDraw(L"アイテム説明", 360, 100, 46, c);
	//装備しますか表示
	Font::StrDraw(L"装備しますか？", 250, 350, 46, c);
	//はい　いいえ表示
	Font::StrDraw(L"はい　　　　いいえ", 130, 440, 64, c);
	//←表示
	Font::StrDraw(L"←", 150, 80, 64, c);

	//一番目に登録したグラフィックをsrc.dst.cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}
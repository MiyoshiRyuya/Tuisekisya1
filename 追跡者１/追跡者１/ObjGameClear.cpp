//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include "GameL\DrawTexture.h"
#include "GameL\Audio.h"

#include "GameHead.h"
#include "ObjGameClear.h"


//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjGameClear::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_r = false;
	m_mou_l = false;
}

//アクション
void CObjGameClear::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();

	//マウス左クリックを押したらシーンメインに移行する
	if (m_mou_x > 0 && m_mou_x < 730 && m_mou_y>0 && m_mou_y < 600)
	{
		//マウスが押されたらタイトル画面に移動
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneTitle());
		}
	}
}

//ドロー
void CObjGameClear::Draw()
{
	float c[4] = { 1,1,1,1 };



	RECT_F src;
	RECT_F dst;

	//切り取り位置
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;

	//表示位置
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;


	

	Draw::Draw(10, &src, &dst, c, 0.0f);
	//外部グラフィックファイルを読み込み0番目に登録
	Draw::LoadImage(L"GameClear.png", 10, TEX_SIZE_512);

	Font::StrDraw(L"Left-Click", 360, 510, 24, c);
}

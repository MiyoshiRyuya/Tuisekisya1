//使用するヘッダーファイル
#include "GameL\DrawFont.h"
#include "GameL\WinInputs.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneManager.h"

#include "GameHead.h"
#include "ObjItem.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjItem::Init()
{

}

//アクション
void CObjItem::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	//マウスのボタンの状態
	m_mou_r = Input::GetMouButtonR();
	m_mou_l = Input::GetMouButtonL();
}

//ドロー
void CObjItem::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	//仮マウス位置表示
	wchar_t str[256];
	swprintf_s(str, L"x=%f,Y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	//仮マウスのボタンの状態
	if (m_mou_r == true)
		Font::StrDraw(L"R=押してる", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=押してない", 20, 30, 12, c);

	if (m_mou_l == true)
		Font::StrDraw(L"L=押してる", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=押してない", 20, 40, 12, c);

	Font::StrDraw(L"アイテム", 300, 100, 46, c);

	Font::StrDraw(L"催涙スプレー", 220, 220, 64, c);

	Font::StrDraw(L"屋根裏部屋の鍵", 190, 340, 64, c);

	Font::StrDraw(L"十字架",300, 460, 64, c);
}
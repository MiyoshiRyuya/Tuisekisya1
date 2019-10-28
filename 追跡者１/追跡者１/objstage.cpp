//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"

#include "GameHead.h"
#include "objstage.h"

//使用するネームスペース
using namespace GameL;

CObjstage::CObjstage(int map[20][20])
{
	//マップデータをコピー
	memcpy(m_map, map, sizeof(int)*(20 * 20));
}

//イニシャライズ
void CObjstage::Init()
{
	m_scroll = 0.0f;
}
//アクション
void CObjstage::Action()
{

}
//ドロー
void CObjstage::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 160.0f;
	src.m_bottom = 160.0;

	dst.m_top =  0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 64.0;

	Draw::Draw(0, &src, &dst, c, 0.0f);

}
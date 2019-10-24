//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"

#include "GameHead.h"
#include "objstage.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjstage::Init()
{
	//マップ情報
	int block_data[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},
	};

	memcpy(m_map, block_data, sizeof(int)*(10 * 10));

}
//アクション
void CObjstage::Action()
{

}
//ドロー
void CObjstage::Draw()
{

}
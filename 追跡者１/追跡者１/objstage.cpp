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
		//主人公の位置を取得
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX();
	float hy = hero->GetY();

	//主人公の衝突確認用フラグの初期化
	hero->SetUp(false);
	hero->SetDown(false);
	hero->SetLeft(false);
	hero->SetRight(false);

	//m_mapの全要素にアクセス
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (m_map[i][j] > 0)
			{
				//要素番号を座標に変更
				float x = j * 32.0f;
				float y = i * 32.0f;

				//主人公とブロックのあたり判定
				if ((hx+32.0f > x) && (hx < x+32.0f) && (hy+32.0f > y ) && (hy < y+32.0f) )
				{
					//上下sayuu判定

					//vectorの作成
					float vx = hx - x;
					float vy = hy - y;

					//長さを求める
					float len = sqrt(vx*vx + vy * vy);

					//角度を求める
					float r = atan2(vy, vx);
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)
						r = abs(r);
					else
						r = 360.0f - abs(r);

					//lenがある一定の長さより短い場合判定に入る
					if (len<88.0f)
					{
						//角度で上下判定を求める
						if ((r < 45 && r>0) || r > 315)
						{
							//右
							hero->SetRight(true);
							hero->SetX(x + 32.0f);
							hero->SetVX(-hero->GetVX()*0.1f);
						}
						if (r > 45 && r < 135)
						{
							//上
							hero->SetDown(true);//主事っこいから見て、下の部分が衝突している
							hero->SetY(y - 32.0f);//ブロックの位置-主人公の幅
							hero->SetVY(0.0f);
						}
						if (r > 135 && r < 225)
						{
							//左
							hero->SetLeft(true);
							hero->SetX(x - 32.0f);
							hero->SetVX(-hero->GetVX()*0.1f);
						}
						if (r > 225 && r < 315)
						{
							//下
							hero->SetUp(true);
							hero->SetY(y + 32.0f);
							if (hero->GetVY() < 0)
							{
								hero->SetVY(0.0f);
							}
						}
					}
				}
			}
		}
	}
}
//ドロー
void CObjstage::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = src.m_left+32.0f;
	src.m_bottom = 32.0;

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (m_map[i][j])
			{
				//表示位置の設定
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0f + m_scroll;
				dst.m_right = dst.m_left+32.0f;
				dst.m_bottom = dst.m_top+32.0f;

				Draw::Draw(1, &src, &dst, c, 0.0f);

			}
		}
	}


}
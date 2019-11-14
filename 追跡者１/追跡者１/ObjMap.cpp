//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "ObjMap.h"
#include"ObjHero.h"
#include"Objtrap.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjMap::Init()
{
	//マップ情報
	int block_date[10][10] =
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
		{1,1,1,1,2,1,3,1,1,1},
	};
	//マップデータをコピー
	memcpy(m_map, block_date, sizeof(int)*(10 * 10));

	m_x = 300;
	m_y = 100;
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_BLUE, OBJ_MAP, 2);

}

//アクション
void CObjMap::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	//主人公の位置を取得
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX();
	float hy = hero->GetY();

	//m_mapの全要素にアクセス
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] > 0)
			{
				//要素番号を座標に変更
				float x = j * 64.0f;
				float y = i * 64.0f;

				//主人公とブロックの当たり判定
				if ((hx + 64.0f > x) && (hx < x + 64.0f) && (hy + 64.0f > y) && (hy < 64.0f))
				{
					//vector
					float vx = hx - x;
					float vy = hy - y;

					float r = atan2(vy, vx);
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)

						r = abs(r);
					else
						r = 360.0f - abs(r);


					//長さを求める
					float len = sqrt(vx*vx + vy * vy);
					if (len < 88.0f)

					if ((r < 45 && r>0) || r > 315)
					{
						//右
						hero->SetRight(true);//主人公の左の部分が衝突している
						hero->SetX(x + 64.0f);//ブロックの位置-主人公の幅
						hero->SetVX(-hero->GetVX()*0.1f);
					}

					if (r > 45 && r < 135)
					{
						//上
						hero->SetDown(true);//主人公から見て、下の部分が衝突している
						hero->SetY(y - 64.0f);//ブロックの位置-主人公の幅
						if(m_map[i][j]>=2)
						hero->SetBT(m_map[i][j]);
						hero->SetVY(0.0f);
					}

					if (r > 135 && r < 225)
					{
						//左
						hero->SetLeft(true);//主人公の右の部分が衝突している
						hero->SetY(y - 64.0f);//ブロックの位置-主人公の幅
						hero->SetVY(0.0f);//-VX*反発係数
					}

					if (r > 225 && r < 315)
					{
						//下
						hero->SetUp(true);//主人公の右の部分が衝突している
						hero->SetVY(y + 64.0f);//ブロックの位置+主人公の幅
						if (hero->GetVY()<0)
						{
							hero->SetVY(0.0f);
						}
					}
					//当たってる場合
					hero->SetX(hx);
					hero->SetY(0.0f);
					hero->SetVY(0.0f);
				}
			}
		}
	}
}

//ドロー
void CObjMap::Draw()
{
	//描写カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //描画元切り取り位置
	RECT_F dst; //描画先表示位置

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 1191.0f;
	src.m_bottom = 842.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(2, &src, &dst, c, 0.0f);

	

	

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] > 0)
			{
				//表示位置＾の瀬鄭
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0f;
				dst.m_right = dst.m_left + 32.0f;
				dst.m_bottom = dst.m_top + 32.0f;
				if (m_map[i][j] == 2)
				{
					//スタートブロック
				}
				else if (m_map[i][j] == 3)
				{
					;
				}
				else
				{



					//描画
					Draw::Draw(3, &src, &dst, c, 0.f);
				}
			}
		}
	}
	
	

}
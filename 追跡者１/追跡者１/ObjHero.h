#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//オブジェクト:主人公
class CObjHero :public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー

	float GetX() { return m_px; }
	float GetY() { return m_py; }
	float GetVY() { return m_vy; }
	float GetVX() { return m_vx; }
	int  GetBT() { return m_stage_type;}

	void SetX(float x) { m_px = x; }
	void SetY(float y) { m_py = y; }
	void SetVY(float vy) { m_vy = vy; }
	void SetVX(float vx) { m_vx = vx; }
	void SetBT(int t) { m_stage_type = t; }
	

	void SetUp(bool b) { m_hit_up = b; }
	void SetDown(bool b) { m_hit_down = b; }
	void SetLeft(bool b) { m_hit_left = b; }
	void SetRight(bool b) { m_hit_right = b; }

private:
		float m_px;
		float m_py;
		float m_vx;
		float m_vy;
		float m_x;
		float m_y;
		float m_hidari; //左向き
		float m_ue;//上向き
		float m_sita;//下向き
		float m_migi;//右向き
		float m_mos_x; //マウスX座標
		float m_mos_y; //マウスY座標

		float X;
		float Y;

		//stageとの衝突確認用
		bool m_hit_up;
		bool m_hit_down;
		bool m_hit_left;
		bool m_hit_right;
		
		//踏んでいる種類を確認用
		int m_stage_type;
};

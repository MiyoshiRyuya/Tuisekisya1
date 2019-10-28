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


private:
		float m_x;
		float m_y;
		float m_px;
		float m_py;
		float m_vx;
		float m_vy;
		float m_posture;
		float m_mos_x; //マウスX座標
		float m_mos_y; //マウスY座標
};

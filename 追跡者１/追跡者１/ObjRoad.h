#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CObjRoad : public CObj
{
public:
	CObjRoad() {};
	~CObjRoad() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_mou_x; //マウスの位置X 
	float m_mou_y; //マウスの位置Y
	bool  m_mou_r; //マウスの右ボタン
	bool  m_mou_l; //マウスの左ボタン
	int m_time;    //マウス時間制御用
};
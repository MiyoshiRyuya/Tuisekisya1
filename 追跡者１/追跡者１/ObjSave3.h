#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CObjSave3 : public CObj
{
public:
	CObjSave3() {};
	~CObjSave3() {};

	void Init();
	void Action();
	void Draw();
	int m_time;  //時間制御
private:
	float m_mou_x; //マウスの位置X 
	float m_mou_y; //マウスの位置Y
	bool  m_mou_r; //マウスの右ボタン
	bool  m_mou_l; //マウスの左ボタン


};
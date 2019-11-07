#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：装備画面
class CObjEquipped2 : public CObj
{
public:
	CObjEquipped2() {};
	~CObjEquipped2() {};

	void Init();   //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー
private:
	float m_mou_x; //マウスの位置X 
	float m_mou_y; //マウスの位置Y
	bool  m_mou_r; //マウスの右ボタン
	bool  m_mou_l; //マウスの左ボタン
};
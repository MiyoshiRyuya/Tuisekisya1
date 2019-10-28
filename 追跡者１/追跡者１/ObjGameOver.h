#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//オブジェクト:タイトル
class CObjGameOver :public CObj
{
public:
	CObjGameOver() {};
	~CObjGameOver() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー

private:
	float m_mou_x;//マウスの位置X
	float m_mou_y;//マウスの位置Y
	bool m_mou_r;//マウスの右ボタン
	bool m_mou_l;//マウスの左ボタン

};

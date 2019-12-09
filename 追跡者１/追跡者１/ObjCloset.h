#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CObjCloset : public CObj
{
public:
	CObjCloset() {};
	CObjCloset(bool closetflag) { flag = closetflag; };
	~CObjCloset() {};

	void Init();
	void Action();
	void Draw();
	int m_time;  //時間制御
	
private:
	float m_x;
	float m_y;
	float v_x;
	float v_y;
	bool flag;
};
#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CObjtest : public CObj
{
public:
	CObjtest() {};
	~CObjtest() {};	CObjtest(bool closetflag) { flag = closetflag; };


	void Init();
	void Action();
	void Draw();
	int m_time;  //時間制御

private:
	float m_x;
	float m_y;
	float v_x;
	float v_y;
	float m_px;
	float m_py;
	bool flag;
	int time;
};
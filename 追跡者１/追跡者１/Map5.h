#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト
class CObjMap5 : public CObj
{
public:
	CObjMap5() {};
	~CObjMap5() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;
	float m_y;
	float m_xx; //出口
	float m_yy;

};
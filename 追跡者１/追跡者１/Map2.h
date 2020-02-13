#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト
class CObjMap2 : public CObj
{
public:
	CObjMap2() {};
	~CObjMap2() {};
	void Init();
	void Action();
	void Draw();

private:
	float x;//Map5移動
	float y;
	float m_x;//椅子
	float m_y;
	float ax;//机
	float ay;
	float kx;//植木
	float ky;
	float bx;//壁
	float by;
	float idouX;
	float idouY;
	float mx;
	float my;
};
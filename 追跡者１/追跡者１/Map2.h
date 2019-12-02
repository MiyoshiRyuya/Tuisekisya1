#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMap2 : public CObj
{
public:
	CObjMap2() {};
	~CObjMap2() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x;//椅子
	float m_y;
	float ax;//机
	float ay;
	float kx;//植木
	float ky;
	float bx;//壁
	float by;
};
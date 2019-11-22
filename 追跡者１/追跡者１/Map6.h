#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMap6 : public CObj
{
public:
	CObjMap6() {};
	~CObjMap6() {};
	void Init();
	void Action();
	void Draw();

private:
	float m_x; //壁用
	float m_y;
	float hon_x; //本棚横並び１用
	float hon_y;
};
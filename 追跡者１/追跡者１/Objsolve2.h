#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン
class CObjsolve2 : public CObj
{
public:
	CObjsolve2(float x, float y) ;
	~CObjsolve2() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	float m_px;
	float m_py;
};
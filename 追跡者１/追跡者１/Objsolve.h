#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン
class CObjsolve : public CObj
{
public:
	CObjsolve() {};
	~CObjsolve() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;
	int time;
};
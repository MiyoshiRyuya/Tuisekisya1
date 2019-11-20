#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：セーブ画面
class CObjTosolvemystery : public CObj
{
public:
	CObjTosolvemystery() {};
	~CObjTosolvemystery() {};

	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;
};
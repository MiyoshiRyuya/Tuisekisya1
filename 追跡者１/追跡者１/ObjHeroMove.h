#pragma once
//使用するヘッダーファイル
#include "GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//オブジェクト:主人公
class CObjHeroMove :public CObj
{
public:
	CObjHeroMove() {};
	~CObjHeroMove() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー

private:
	float KEY_INPUT_RIGHT;
	float KEY_INPUT_LEFT;
	float KEY_INPUT_UP;
	float KEY_INPUT_DOWN;
	
	float m_x;
	float m_y;
	float v_y;
	float v_x;

	



};

 
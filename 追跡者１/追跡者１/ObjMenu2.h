#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjMenu2 : public CObj
{
public:
	CObjMenu2() {};
	~CObjMenu2() {};
	void Init();
	void Action();
	void Draw();

private:
	int Cross; //十字架の取得数確認用
	int Item;  //Item確認画面変換用
	int Migi;  //初期画面カーソル処理用
	int Migi2; //GameOver選択画面カーソル処理用
	int GameOver; //game終了の最終確認用
	int time;  //時間
}; 
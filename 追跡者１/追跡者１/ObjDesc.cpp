#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\DrawFont.h"
#include"GameL\Audio.h"

#include"GameHead.h"
#include"ObjDesc.h"


using namespace GameL;

//イニシャライズ
void CObjDesc::Init()
{
	flag = false;
}

//アクション
void CObjDesc::Action()
{
	time++;

	if (Input::GetVKey(VK_RETURN) == true)
	{
		flag = true;
	}
	if (time >= 10)
	{
		if (flag == true)
		{
			if (Input::GetVKey(VK_RETURN) == false)
			{
				Audio::Start(1);
				Scene::SetScene(new CSceneTitle());
			}
		}
	}
}

//ドロー
void CObjDesc::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"操作説明", 300, 40, 40, c);

	Font::StrDraw(L"W,A,S,Dキー 移動", 80, 100, 23, c);

	Font::StrDraw(L"Enterキー　決定、アイテム獲得、ある場所で出入りする、部屋移動", 80, 140, 23, c);

	Font::StrDraw(L"Mキー      メニュー画面を開く", 80, 180, 23, c);

	Font::StrDraw(L"メニュー操作説明", 240, 280, 40, c);

	Font::StrDraw(L"W,Sキー    上下移動", 80, 340, 23, c);

	Font::StrDraw(L"A,Dキー    左右移動", 80, 380, 23, c);

	Font::StrDraw(L"Enterキー　決定", 80, 420, 23, c);

	Font::StrDraw(L"Enterキーでタイトルに移動", 80, 500, 23, c);
}

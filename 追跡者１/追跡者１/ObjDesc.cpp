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

	if (Input::GetVKey(VK_RETURN) == true)
	{
		flag = true;
	}
	if (flag == true)
	{
		if (Input::GetVKey(VK_RETURN) == false)
		{
			Audio::Start(1);
			Scene::SetScene(new CSceneTitle());
		}
	}

}

//ドロー
void CObjDesc::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"操作説明", 300, 40, 40, c);

	Font::StrDraw(L"W,A,S,Dキー 移動", 100, 100, 23, c);

	Font::StrDraw(L"Enterキー　決定、アイテム獲得、ある場所に入る時", 100, 140, 23, c);

	Font::StrDraw(L"Eキー  ある場所から出る時", 100, 180, 23, c);

	Font::StrDraw(L"Mキー    メニュー画面を開く", 100, 220, 23, c);


	
}

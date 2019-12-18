//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"
#include "GameL\Audio.h"

#include "GameHead.h"
#include "ObjMenu2.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

extern float genzaiti; //���ݒn
extern bool itemflag;

//�C�j�V�����C�Y
void CObjMenu2::Init()
{
	Cross = 0; //�\���ː����p
	Item = 0;
	Migi = 1; //�������
	Migi2 = 1; //game�I�����
	Migi3 = 1; //Item���
	Migi4 = 1; //Item�I��
	GameOver = 0;
	ItemKN; //�A�C�e���m�F
	oto = 0;

	time = 0; // ���ԑ���N
}

//�A�N�V����
void CObjMenu2::Action()
{
	if (oto == 0) {
		Audio::Start(4);
		oto = 1;
	}
	
	time++;
	
	//���j���[���̏����i���G�H�j
	if (time>=10)
	{
		if (GameOver == 0) {
			if (Migi == 1) {
				if (Input::GetVKey('W') == true) 
				{
					Audio::Start(2);
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) 
				{
					Audio::Start(2);
					Migi = 2;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					Audio::Start(3);
					GameOver = 2;
					Item = 1;
					time = 0;
				}
			}
			else if (Migi == 2) {
				if (Input::GetVKey('W') == true) 
				{
					Audio::Start(2);
					Migi = 1;
					time = 0;
				}

				else if (Input::GetVKey('S') == true) 
				{
					Audio::Start(2);
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					//Audio::Start(3);
					oto = 0;
					if (genzaiti == 1)
						Scene::SetScene(new CSceneMain());
					else if (genzaiti == 2)
						Scene::SetScene(new CSceneMap2());
					else if (genzaiti == 3)
						Scene::SetScene(new CSceneMap3());
					else if (genzaiti == 4)
						Scene::SetScene(new CSceneMap4());
					else if (genzaiti == 5)
						Scene::SetScene(new CSceneMap5());
					else if (genzaiti == 6)
						Scene::SetScene(new CSceneMap6());
				}
			}
			else if (Migi == 3) {
				if (Input::GetVKey('W') == true) 
				{
					Audio::Start(2);
					Migi = 2;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) 
				{
					Audio::Start(2);
					Migi = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					Audio::Start(3);
					GameOver = 1;
					time = 0;
				}
			}
		}
		else if (GameOver == 1) {
			if (Migi2 == 1) {
				if (Input::GetVKey('A') == true) 
				{
					Audio::Start(2);
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey('D') == true)
				{
					Audio::Start(2);
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					//Audio::Start(3);
					GameOver = 0;
					Scene::SetScene(new CSceneTitle());
				}
			}
			else if (Migi2 == 2) {
				if (Input::GetVKey('A') == true) 
				{
					Audio::Start(2);
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey('D') == true) 
				{
					Audio::Start(2);
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) 
				{
					Audio::Start(1);
					GameOver = 0;
					Migi2 = 1;
					time = 0;
				}
			}
		}
		else if (Item == 1) {
			if (Migi4 == 1)
			{
				if (itemflag == true) {
					if (Input::GetVKey('W') == true) {
						Audio::Start(2);
						Migi4 = 2;
						time = 0;
					}
					else if (Input::GetVKey('S') == true) {
						Audio::Start(2);
						Migi4 = 2;
						time = 0;
					}
				}
				if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(1);
					Item = 0;
					GameOver = 0;
					time = 0;
				}
			}
			else if (Migi4 == 2)
			{
				if (Input::GetVKey('W') == true) {
					Audio::Start(2);
					Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Audio::Start(2);
					Migi4 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true)
				{
					Audio::Start(3);
					Item = 0;
					//GameOver = 0;
					Cross = 1;
					time = 0;
				}
			}
		}
		else if (Cross == 1) {
			if (Input::GetVKey(VK_RETURN) == true) {
				Audio::Start(1);
				Item = 1;
				//GameOver = 0;
				Cross = 0;
				time = 0;
			}
		}
	}
}

//�h���[
void CObjMenu2::Draw()
{
	float c[4]{ 1.0f,1.0f, 1.0f, 1.0f };

	RECT_F src;
	RECT_F dst;

	//���j���[��ʕ\��
	Font::StrDraw(L"MENU", 0, 0, 64, c);

	//�ŏ��̉��
	if (GameOver == 0) {
		Font::StrDraw(L"�����A�C�e���m�F", 260, 140, 32, c);
		Font::StrDraw(L"�Q�[����ʂɖ߂�", 260, 240, 32, c);
		Font::StrDraw(L"�Q�[�����I������", 260, 340, 32, c);
	}

	//�Q�[���I���̍ŏI�m�F
	else if (GameOver == 1) {
		Font::StrDraw(L"�{���ɏI�����܂����H", 240, 140, 32, c);
		Font::StrDraw(L"(���݂̐i�s���e�͕ۑ�����܂���)", 140, 180, 32, c);
		Font::StrDraw(L"�͂�", 250, 320, 32, c);
		Font::StrDraw(L"������", 450, 320, 32, c);
	}

	else if (Item == 1) {
		if (itemflag == false) {
			Font::StrDraw(L"�����A�C�e��������܂���", 220, 200, 32, c);
		}
		else if (itemflag == true) {
			Font::StrDraw(L"�\����", 340, 200, 32, c);
		}
		Font::StrDraw(L"�߂�", 360, 380, 32, c);
	}

	else if (Cross == 1) {
		Font::StrDraw(L"�����{���M�[�j�Ń^�s�I�J��SEIKIN", 140, 200, 32, c);
		Font::StrDraw(L"�߂�", 360, 380, 32, c);
	}
	//�J�[�\���i�ˁj
	if (GameOver == 0) {
		if (Migi == 1)
		{
			Font::StrDraw(L"��", 220, 140, 32, c);
		}
		else if (Migi == 2) {
			Font::StrDraw(L"��", 220, 240, 32, c);
		}
		else if (Migi == 3) {
			Font::StrDraw(L"��", 220, 340, 32, c);
		}
	}

	if (GameOver == 1) {
		if (Migi2 == 1)
		{
			Font::StrDraw(L"��", 210, 320, 32, c);
		}
		else if (Migi2 == 2) {
			Font::StrDraw(L"��", 410, 320, 32, c);
		}
	}

	if (Item == 1) {
		if (Migi4 == 1) {
			Font::StrDraw(L"��", 320, 380, 32, c);
		}
		else if (Migi4 == 2) {
			Font::StrDraw(L"��", 300, 200, 32, c);
		}
	}

	if (Cross == 1) {
		Font::StrDraw(L"��", 320, 380, 32, c);
	}

	//Menu���
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 800.0f;
	src.m_bottom = 600.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}
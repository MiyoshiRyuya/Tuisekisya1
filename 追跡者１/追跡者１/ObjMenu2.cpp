//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawFont.h"
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"
#include "GameL\HitBoxManager.h"

#include "GameHead.h"
#include "ObjMenu2.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

extern float genzaiti; //���ݒn

//�C�j�V�����C�Y
void CObjMenu2::Init()
{
	Cross = 0;
	Item = 0;
	Migi = 1; //�������
	Migi2 = 1; //game�I�����
	GameOver = 0;

	time = 0; // ���ԑ���N
}

//�A�N�V����
void CObjMenu2::Action()
{

	time++;
	
	//���j���[���̏����i���G�H�j
	if (time>=10)
	{
		if (GameOver == 0) {
			if (Migi == 1) {
				if (Input::GetVKey('W') == true) {
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Migi = 2;
					time = 0;
				}
			}
			else if (Migi == 2) {
				if (Input::GetVKey('W') == true) {
					Migi = 1;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Migi = 3;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
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
				if (Input::GetVKey('W') == true) {
					Migi = 2;
					time = 0;
				}
				else if (Input::GetVKey('S') == true) {
					Migi = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					GameOver = 1;
					time = 0;
				}
			}
		}
		else if (GameOver == 1) {
			if (Migi2 == 1) {
				if (Input::GetVKey('A') == true) {
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey('D') == true) {
					Migi2 = 2;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					GameOver = 0;
					Scene::SetScene(new CSceneTitle());
				}
			}
			else if (Migi2 == 2) {
				if (Input::GetVKey('A') == true) {
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey('D') == true) {
					Migi2 = 1;
					time = 0;
				}
				else if (Input::GetVKey(VK_RETURN) == true) {
					GameOver = 0;
					Migi2 = 1;
					time = 0;
				}
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
	if (GameOver == 1) {
		Font::StrDraw(L"�{���ɏI�����܂����H", 240, 140, 32, c);
		Font::StrDraw(L"(���݂̐i�s���e�͕ۑ�����܂���)", 140, 180, 32, c);
		Font::StrDraw(L"�͂�", 250, 320, 32, c);
		Font::StrDraw(L"������", 450, 320, 32, c);
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
//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"

#include "GameHead.h"
#include "ObjMap.h"
#include"ObjHero.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjMap::Init()
{
	//�}�b�v���
	int block_date[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, block_date, sizeof(int)*(10 * 10));
}

//�A�N�V����
void CObjMap::Action()
{
	//��l���̈ʒu���擾
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX();
	float hy = hero->GetY();

	//m_map�̑S�v�f�ɃA�N�Z�X
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] > 0)
			{
				//�v�f�ԍ������W�ɕύX
				float x = j * 64.0f;
				float y = i * 64.0f;

				//��l���ƃu���b�N�̓����蔻��
				if ((hx + 64.0f > x) && (hx < x + 64.0f) && (hy + 64.0f > y) && (hy < 64.0f))
				{
					//vector
					float vx = hx - x;
					float vy = hy - y;

					float r = atan2(vy, vx);
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)

						r = abs(r);
					else
						r = 360.0f - abs(r);


					//���������߂�
					float len = sqrt(vx*vx + vy * vy);
					if (len < 88.0f)

					if ((r < 45 && r>0) || r > 315)
					{
						//�E
						hero->SetRight(true);//��l���̍��̕������Փ˂��Ă���
						hero->SetX(x + 64.0f);//�u���b�N�̈ʒu-��l���̕�
						hero->SetVX(-hero->GetVX()*0.1f);
					}

					if (r > 45 && r < 135)
					{
						//��
						hero->SetDown(true);//��l�����猩�āA���̕������Փ˂��Ă���
						hero->SetY(y - 64.0f);//�u���b�N�̈ʒu-��l���̕�
						hero->SetVY(0.0f);
					}

					if (r > 135 && r < 225)
					{
						//��
						hero->SetLeft(true);//��l���̉E�̕������Փ˂��Ă���
						hero->SetY(y - 64.0f);//�u���b�N�̈ʒu-��l���̕�
						hero->SetVY(0.0f);//-VX*�����W��
					}

					if (r > 225 && r < 315)
					{
						//��
						hero->SetUp(true);//��l���̉E�̕������Փ˂��Ă���
						hero->SetVY(y + 64.0f);//�u���b�N�̈ʒu+��l���̕�
						if (hero->GetVY()<0)
						{
							hero->SetVY(0.0f);
						}
					}
					//�������Ă�ꍇ
					hero->SetX(hx);
					hero->SetY(0.0f);
					hero->SetVY(0.0f);
				}
			}
		}
	}
}

//�h���[
void CObjMap::Draw()
{
	//�`�ʃJ���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //�`�挳�؂���ʒu
	RECT_F dst; //�`���\���ʒu

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 1191.0f;
	src.m_bottom = 842.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;
	Draw::Draw(4, &src, &dst, c, 0.0f);

	//�؂���ʒu�̐ݒ�
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = src.m_left + 64.0f;
	src.m_bottom = 64.0f;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] > 0)
			{
				//�\���ʒu�O�̐��A
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0f;
				dst.m_right = dst.m_left + 32.0f;
				dst.m_bottom = dst.m_top + 32.0f;

				//�`��
				Draw::Draw(3, &src, &dst, c, 0.f);
			}
		}
	}
	
}
//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneManager.h"
#include "GameL\SceneObjManager.h"

#include "GameHead.h"
#include "objstage.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

CObjstage::CObjstage(int map[20][20])
{
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, map, sizeof(int)*(20 * 20));
}

//�C�j�V�����C�Y
void CObjstage::Init()
{
	m_scroll = 0.0f;
}
//�A�N�V����
void CObjstage::Action()
{
		//��l���̈ʒu���擾
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX();
	float hy = hero->GetY();

	//��l���̏Փˊm�F�p�t���O�̏�����
	hero->SetUp(false);
	hero->SetDown(false);
	hero->SetLeft(false);
	hero->SetRight(false);

	//m_map�̑S�v�f�ɃA�N�Z�X
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (m_map[i][j] > 0)
			{
				//�v�f�ԍ������W�ɕύX
				float x = j * 32.0f;
				float y = i * 32.0f;

				//��l���ƃu���b�N�̂����蔻��
				if ((hx+32.0f > x) && (hx < x+32.0f) && (hy+32.0f > y ) && (hy < y+32.0f) )
				{
					//�㉺sayuu����

					//vector�̍쐬
					float vx = hx - x;
					float vy = hy - y;

					//���������߂�
					float len = sqrt(vx*vx + vy * vy);

					//�p�x�����߂�
					float r = atan2(vy, vx);
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)
						r = abs(r);
					else
						r = 360.0f - abs(r);

					//len��������̒������Z���ꍇ����ɓ���
					if (len<88.0f)
					{
						//�p�x�ŏ㉺��������߂�
						if ((r < 45 && r>0) || r > 315)
						{
							//�E
							hero->SetRight(true);
							hero->SetX(x + 32.0f);
							hero->SetVX(-hero->GetVX()*0.1f);
						}
						if (r > 45 && r < 135)
						{
							//��
							hero->SetDown(true);//�厖���������猩�āA���̕������Փ˂��Ă���
							hero->SetY(y - 32.0f);//�u���b�N�̈ʒu-��l���̕�
							hero->SetVY(0.0f);
						}
						if (r > 135 && r < 225)
						{
							//��
							hero->SetLeft(true);
							hero->SetX(x - 32.0f);
							hero->SetVX(-hero->GetVX()*0.1f);
						}
						if (r > 225 && r < 315)
						{
							//��
							hero->SetUp(true);
							hero->SetY(y + 32.0f);
							if (hero->GetVY() < 0)
							{
								hero->SetVY(0.0f);
							}
						}
					}
				}
			}
		}
	}
}
//�h���[
void CObjstage::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = src.m_left+32.0f;
	src.m_bottom = 32.0;

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (m_map[i][j])
			{
				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0f + m_scroll;
				dst.m_right = dst.m_left+32.0f;
				dst.m_bottom = dst.m_top+32.0f;

				Draw::Draw(1, &src, &dst, c, 0.0f);

			}
		}
	}


}
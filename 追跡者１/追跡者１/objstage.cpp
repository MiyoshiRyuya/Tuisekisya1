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
	//a
}
//�h���[
void CObjstage::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 320.0f;
	src.m_right = src.m_left+64.0f;
	src.m_bottom = 64.0;

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
				dst.m_bottom = dst.m_top+32.0;

				Draw::Draw(1, &src, &dst, c, 0.0f);
			}
		}
	}


}
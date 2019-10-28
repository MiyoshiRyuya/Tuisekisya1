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

}
//�h���[
void CObjstage::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 160.0f;
	src.m_bottom = 160.0;

	dst.m_top =  0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 64.0f;
	dst.m_bottom = 64.0;

	Draw::Draw(0, &src, &dst, c, 0.0f);

}
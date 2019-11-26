//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/HitBoxManager.h"

#include "GameHead.h"
#include "ObjCloset.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;



//�C�j�V�����C�Y
void CObjCloset::Init()
{
	Hits::SetHitBox(this, m_x, m_y, 800, 110, ELEMENT_GREEN, OBJ_MAP6, 11);

		//E�{�^���������ƃQ�[����ʂɈړ�����
		if (Input::GetVKey('E') == true)
		{
			Scene::SetScene(new CSceneMain());
		}
}

//�A�N�V����
void CObjMap6::Action()
{
	CHitBox*hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr) {

	}
}


//�h���[
void CObjCloset::Draw()
{

}
#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//�I�u�W�F�N�g�F�g���b�v
class CObjtrap :public CObj
{
public:

	CObjtrap(float x,float y);
	CObjtrap() {};
	~CObjtrap() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	float vx;
	float vy;

};

//�I�u�W�F�N�g�F�g���b�v1
class CObjtrap1 :public CObj
{
public:

	CObjtrap1(float x, float y);
	CObjtrap1() {};
	~CObjtrap1() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	float vx;
	float vy;

};

//�I�u�W�F�N�g�F�g���b�v2
class CObjtrap2 :public CObj
{
public:

	CObjtrap2(float x, float y);
	CObjtrap2() {};
	~CObjtrap2() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	float vx;
	float vy;

};

//�I�u�W�F�N�g�F�g���b�v3
class CObjtrap3 :public CObj
{
public:

	CObjtrap3(float x, float y);
	CObjtrap3() {};
	~CObjtrap3() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;

	float vx;
	float vy;

};


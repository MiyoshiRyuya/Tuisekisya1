#pragma once
#include"GameL\SceneObjManager.h"
using namespace GameL;

//オブジェクト：トラップ
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

//オブジェクト：トラップ1
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

//オブジェクト：トラップ2
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

//オブジェクト：トラップ3
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


#pragma once
using namespace GameL;

//オブジェクト：家具
class CObjFurniture21 :public CObj
{
public:

	CObjFurniture21() {};
	~CObjFurniture21() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

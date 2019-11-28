#pragma once
using namespace GameL;

//オブジェクト：家具
class CObjFurniture22 :public CObj
{
public:

	CObjFurniture22() {};
	~CObjFurniture22() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

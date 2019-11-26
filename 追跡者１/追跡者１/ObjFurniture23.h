#pragma once
using namespace GameL;

//オブジェクト：家具
class CObjFurniture23 :public CObj
{
public:

	CObjFurniture23() {};
	~CObjFurniture23() {};
	void Init();
	void Action();
	void Draw();
private:
	float m_x;
	float m_y;


};

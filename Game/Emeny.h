#pragma once
class Emeny
{
private:
	int m_hp;
public:
	Emeny(const int hp);
	~Emeny();

	int GetHp()const { return m_hp; }
	void SetHp(const int hp) { m_hp = hp; }
};


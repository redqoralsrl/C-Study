#pragma once
enum class PLAYERSKILL
{
	NONE, POSITION, SKILL_1
};

class Player
{
private:
	int m_hp;
	int player_Atk;
public:
	Player(int hp); // √ ±‚»≠
	~Player();

	int GetHp()const { return m_hp; }
	int GetAtk()const { return player_Atk; }
	void SetHp(const int hp) { m_hp = hp; }
};


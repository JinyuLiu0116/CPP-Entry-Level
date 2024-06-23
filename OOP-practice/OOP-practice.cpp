#include <iostream>
using namespace std;

class Pokemon {
	string name;
	string type;
	int hp;
	int level;
	double attack;
	double defend;
	double speed;
public:
	Pokemon(string name, string type, int hp, int level, double attack, double defend, double speed)
	{
		this->name = name;
		this->type = type;
		this->hp = hp;
		this->level = level;
		this->attack = attack;
		this->defend = defend;
		this->speed = speed;
	}

	void displyInfo();
};
class ElectricalType :public Pokemon
{
public:
	ElectricalType(string name, string type, int hp, int level, double attack, double defend, double speed) 
		:Pokemon(name, type, hp, level, attack, defend, speed)
	{

	}
};
int main()
{
	ElectricalType pokemon1("Pikachu", "electrical", 100, 1, 8, 6, 11);
	pokemon1.displyInfo();
}
void Pokemon::displyInfo()
{
	cout << "Pokemon's name: " << name << '\n';
	cout << "Pokemon's type: " << type << '\n';
	cout << "Pokemon's hp: " << hp << '\n';
	cout << "Pokemon's level: " << level << '\n';
	cout << "Pokemon's attack: " << attack << '\n';
	cout << "Pokemon's defend: " << defend << '\n';
	cout << "Pokemon's speed: " << speed << '\n';
}
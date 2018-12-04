#include<iostream>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include<string>
#include<cstdlib>
#include<fstream>

#include"Map Loading.h"


using namespace std;

class terrain
{
public:
	int ID;
	bool walkable;
	bool breakable;
	string name;
	string description;
	int durability;
};


class stone :public terrain
{

	stone()
	{
		ID = 1;
		walkable = false;
		name = "Stone";
		description = "Big, chunky piece of stone, you should walk around it.";
		durability = 11;
	};

};

class grass :public terrain
{

	grass()
	{
		ID = 2;
		walkable = true;
		name = "Grass";
		description = "A smooth, green grass slowly passes below your feet making you feel lighter.";
		durability = 11;
	};

};

class entity
{
public:
	bool friendly;
	bool stationary;
	int ID;
	string name;
	string description;

	int strength;
	double damage;

	double health;
	int stamina;

	int intelligence;
	int wisdom;

	int agility;
	int speed;

};

class player :public entity
{
public:
	int gold_balance = 0;
	int Player_X;
	int Player_Y;

private:
	int experience = 0;
	int karma = 0;
	int reputation = 0;
	int level;

	double current_health;
	double maximum_health = 15;
	double minimum_health = 1;

	double damage_multiplier = 0.1;
	double health_multiplier = 0.1;
	double wisdom_multiplier = 0.1;

	player()
	{
		strength = 10;
		//damage = 1 + (strength * damage_multiplier);

		stamina = 20;
	    //maximum_health = 10 + (stamina * health_multiplier);
		current_health = health;

		intelligence = 10;
		//wisdom = 5 + (intelligence * wisdom_multiplier);
	}
};


class object
{
	int ID;
	string name;
	string description;

	int str_req;
	int int_req;
	int agi_req;

	bool weapon;
	bool armor;
	string armor_type;
	

};




int main()
{
	ifstream Text_Map("Map.txt");


	Map_Display();

	



	system("Pause");

	return 0;
}
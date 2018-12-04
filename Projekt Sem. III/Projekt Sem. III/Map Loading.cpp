#include<iostream>
#include<fstream>

using namespace std;

void Map_Display()
{
	ifstream Text_Map("Map.txt");

	char Map[10][10];

	if (Text_Map.good())
	{
		for (int x = 0; x < 10; x++)
		{
			for (int y = 0; y < 10; y++)
			{
				Map[x][y] = Text_Map.get();
			}
			Text_Map.get();
		}
	}

	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			cout << "\t" << Map[x][y];
		}
		cout << "\n";
	}
}
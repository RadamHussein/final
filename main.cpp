#include "infirmary.h"
#include "tower.h"
#include "mapRoom.h"
#include "catacombs.h"
#include "forest.h"
#include "greatHall.h"
#include "dungeon.h"
#include "mines.h"
#include "throneRoom.h"
#include "hallway.h"
#include "infirmary.h"
#include <iostream>

using namespace std;

int main()
{

	Hallway gameHallway;
	Infirmary gameInfirmary;
	Tower gameTower;
	MapRoom gameMapRoom;
	Catacombs gameCatacombs;
	Forest gameForest;
	GreatHall gameGreatHall;
	Dungeon gameDungeon;
	Mines gameMines;
	ThroneRoom gameThroneRoom;

	cout << "Created " << gameHallway.getName() << endl;
	cout << "Created " << gameInfirmary.getName() << endl;
	cout << "Created " << gameTower.getName() << endl;
	cout << "Created " << gameMapRoom.getName() << endl;
	cout << "Created " << gameCatacombs.getName() << endl;
	cout << "Created " << gameForest.getName() << endl;
	cout << "Created " << gameGreatHall.getName() << endl;
	cout << "Created " << gameDungeon.getName() << endl;
	cout << "Created " << gameMines.getName() << endl;
	cout << "Created " << gameThroneRoom.getName() << endl;
/*
	cout << endl;
	cout << "Which direction would you like to go?" << endl;
	cout << "[1] Up" << endl;
	cout << "[2] Down" << endl;
*/
	return 0;
}

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
#include "game.h"
#include <iostream>

using namespace std;

int main()
{

	int userInput;
	char charInput;

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

	//hallway
	gameHallway.setUp(&gameInfirmary);
	gameHallway.setDown(&gameTower);
	gameHallway.setLeft(NULL);
	gameHallway.setRight(&gameMapRoom);

	//infirmary
	gameInfirmary.setUp(&gameTower);
	gameInfirmary.setDown(&gameHallway);
	gameInfirmary.setLeft(&gameDungeon);
	gameInfirmary.setRight(&gameCatacombs);

	//tower
	gameTower.setUp(&gameHallway);
	gameTower.setDown(&gameInfirmary);
	gameTower.setLeft(&gameMines);
	gameTower.setRight(&gameForest);

	//catacombs
	gameCatacombs.setUp(&gameForest);
	gameCatacombs.setDown(&gameMapRoom);
	gameCatacombs.setLeft(&gameInfirmary);
	gameCatacombs.setRight(&gameDungeon);

	//map room
	gameMapRoom.setUp(&gameCatacombs);
	gameMapRoom.setDown(&gameForest);
	gameMapRoom.setLeft(&gameHallway);
	gameMapRoom.setRight(&gameGreatHall);

	//forest
	gameForest.setUp(&gameMapRoom);
	gameForest.setDown(&gameCatacombs);
	gameForest.setLeft(&gameTower);
	gameForest.setRight(&gameMines);

	//dungeon
	gameDungeon.setUp(&gameMines);
	gameDungeon.setDown(&gameGreatHall);
	gameDungeon.setLeft(&gameCatacombs);
	gameDungeon.setRight(&gameInfirmary);

	//great hall
	gameGreatHall.setUp(&gameDungeon);
	gameGreatHall.setDown(&gameMines);
	gameGreatHall.setLeft(&gameMapRoom);
	gameGreatHall.setRight(&gameThroneRoom);

	//mines
	gameMines.setUp(&gameGreatHall);
	gameMines.setDown(&gameDungeon);
	gameMines.setLeft(&gameForest);
	gameMines.setRight(&gameTower);
	
	//throne room
	gameThroneRoom.setUp(NULL);
	gameThroneRoom.setDown(NULL);
	gameThroneRoom.setLeft(&gameGreatHall);
	gameThroneRoom.setRight(NULL);

	Game newGame(&gameHallway, &gameThroneRoom);

	while (!newGame.isGameOver())
	{
		cout << endl;
		cout << "Which direction would you like to go?" << endl;
		cout << "[1] Up" << endl;
		cout << "[2] Down" << endl;
		cout << "[3] Left" << endl;
		cout << "[4] Right" << endl;
		cin >> userInput;

		newGame.handleUserInput(userInput);
/*
		if (newGame.getPlayer().getBag().isEmpty() == false)
		{
			cout << "Would you like to use an item";
			cout << " in your bag? Y/N" << endl;
			cin >> charInput;

			if (charInput == 'Y' || 'y')
			{
				
			}
		}
*/
	}

	return 0;
}

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
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

	int userInput;
	string checkInput;

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

	//create game object
	Game newGame(&gameHallway, &gameThroneRoom);
	
	//list the goal for the game
	cout << endl << endl;
	newGame.listGoal();


	cout << endl;
	cout << "Your location is ";
	cout << newGame.gameLocation() << endl;

	//main menu
	while (!newGame.isGameOver() && userInput != 8)
	{
		//cout << endl;
		//cout << "Your location is ";
		//cout  << newGame.gameLocation() << endl;

		cout << endl;
		cout << "What is your next move?" << endl;
		cout << "[1] Up" << endl;
		cout << "[2] Down" << endl;
		cout << "[3] Left" << endl;
		cout << "[4] Right" << endl;
		cout << "[5] View bag" << endl;	
		cout << "[6] Use Item" << endl;
		cout << "[7] List Goals" << endl;
		cout << "[8] Quit" << endl;
		cin >> checkInput;

		if (checkInput.at(0) > '8' || checkInput.at(0) < '1')	
		{
			cout << "Not a valid selection" << endl;
		}
		else
		{
			userInput = atoi(checkInput.c_str());
			//call game input function
			newGame.handleUserInput(userInput);
		}
	}

	return 0;
}

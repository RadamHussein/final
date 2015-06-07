#include "game.h"
#include "player.h"
#include "item.h"
#include "abstractRoom.h"
#include <iostream>

using namespace std;

Game::Game(AbstractRoom *begin, AbstractRoom *end) : myPlayer(begin), finish(end)
{}

bool Game::isGameOver()
{
	if (myPlayer.getHealth() == 0)
	{
		cout << "Out of health. Player is dead.";
		cout << " GAME OVER" << endl;
		return true;
	}
	else if (myPlayer.getBag().containsItem(SWORD))
	{
		cout << "You found the sword. You win!!" << endl;
		return true;
	}
	return false;
}

void Game::handleUserInput(int input)
{
	cout << "Player is in ";
	cout << myPlayer.getRoom()->getName() << " before move." << endl;
	switch(input)
	{ 
		case 1:
			myPlayer.moveUp(); 
			break;
		case 2:
			myPlayer.moveDown();
			break;
		case 3:
			myPlayer.moveLeft();
			break;
		case 4:	
			myPlayer.moveRight();
			break;
		default:
			break;
	}
	cout << "Player is now in ";
	cout << myPlayer.getRoom()->getName() << " after move." << endl;
	myPlayer.getRoom()->update(myPlayer);
	cout << "Health: " << myPlayer.getHealth() << endl;
}

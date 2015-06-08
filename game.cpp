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
	else if (myPlayer.getBag().containsItem(SWORD) && (myPlayer.getRoom()->getRoomNumber() == 10))
	{
		cout << "You've brought the sword. The throne is now yours! You win!!" << endl;
		return true;
	}
	return false;
}

void Game::handleUserInput(int input)
{
	char charInput;
	int userSelect;

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
		case 5:
			if (myPlayer.getBag().isEmpty() == true)
			{
				cout << "Your bag is empty" << endl;
				break;
			}
			else
			{
				myPlayer.getBag().printBag();
				break;
			}
		default:
			break;
	}
	cout << "Player is now in ";
	cout << myPlayer.getRoom()->getName() << " after move." << endl;
	myPlayer.getRoom()->update(myPlayer);
	cout << "Health: " << myPlayer.getHealth() << endl;

	if (myPlayer.getBag().isEmpty() == false)
	{
		cout << "Would you like to use an item";
		cout << " in your bag? Y/N" << endl;
		cin >> charInput;
	
		if (charInput == 'Y' || charInput == 'y')
		{
			cout << endl;
			cout << "Items: " << endl;
			cout << "[1] Potion" << endl;
			cout << "[2] Gold" << endl;
			cout << "[3] Key" << endl;
			cin >> userSelect;

			if (userSelect == 1)
			{
				if (myPlayer.getBag().containsItem(POTION) == true)
				{
					if (myPlayer.getRoom()->getRoomNumber() == 6)
					{
						cout << "A wizard has cursed the forest.";
						cout << " Potion will not work here." << endl;
					}
					else
					{
						myPlayer.addHealth(10);
						myPlayer.getBag().removeItem(POTION);
					}
				}
				else
				{
					cout << "You do not have any Potion.";
					cout << endl;
				}
			}
			else if (userSelect == 2)
			{
				if (myPlayer.getBag().containsItem(GOLD) == true)
				{
					myPlayer.getBag().removeItem(GOLD);
				}
				else
				{
					cout << "You do not have any Gold.";
					cout << endl;
				}
			}
			else if (userSelect == 3)
			{
				if (myPlayer.getBag().containsItem(KEY) == true)
				{
					myPlayer.getBag().removeItem(KEY);
				}
				else
				{
					cout << "You do not have the Key.";
					cout << endl;
				}
			} 
		}
	}
}

Player& Game::getPlayer()
{
	return myPlayer;
}

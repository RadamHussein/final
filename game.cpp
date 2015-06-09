#include "game.h"
#include "player.h"
#include "item.h"
#include "abstractRoom.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Game::Game(AbstractRoom *begin, AbstractRoom *end) : myPlayer(begin), finish(end)
{}

bool Game::isGameOver()
{
	if (myPlayer.getHealth() < 1)
	{
		cout << "Out of health. Player is dead.";
		cout << " GAME OVER" << endl << endl;
		return true;
	}
	else if (myPlayer.getBag().containsItem(SWORD) && (myPlayer.getRoom()->getRoomNumber() == 10))
	{
		cout << endl;
		cout << "You've brought the sword. The throne is now yours! You win!!" << endl;
		cout << endl << endl;
		return true;
	}
	return false;
}

string Game::gameLocation()
{
	return myPlayer.getRoom()->getName();
}

void Game::handleUserInput(int input)
{
	string checkInput;
	int userSelect;

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
		case 6:
			if (myPlayer.getBag().isEmpty() == true)
			{
				cout << "Your bag is empty" << endl;
				break;
			}
			else
			{
				bool inputOkay = false;

				while (inputOkay == false)
				{
					cout << endl;
					cout << "Items: " << endl;
					cout << "[1] Potion" << endl;
					cout << "[2] Gold" << endl;
					cout << "[3] Key" << endl;
					cin >> checkInput;

					if (checkInput.at(0) > '0' || checkInput.at(0) < '4')
					{
						userSelect = atoi(checkInput.c_str());
						inputOkay = true;
					}	
					else
					{
						cout << "Not a valid selection." << endl;
					}
				}

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
					if (myPlayer.getBag().containsItem(GOLD1))
					{
						myPlayer.getBag().removeItem(GOLD1);
						cout << "Gold has been removed from your bag." << endl;
					}
					else if (!myPlayer.getBag().containsItem(GOLD1))
					{
						if (myPlayer.getBag().containsItem(GOLD2))
						{
							myPlayer.getBag().removeItem(GOLD2);
							cout << "Gold has been removed from";
							cout << " your bag." << endl;
						}
						else
						{
							cout << "You do not have any Gold.";
							cout << endl;
						}
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
			break; 
		case 7:
			listGoal();
			break;
		case 8:
			break;
	
		default:
			break;
	}
	
	if (input != 7 && input != 8)
	{
		cout << endl;
		cout << "Player is now in ";
		cout << myPlayer.getRoom()->getName() << endl;
		myPlayer.getRoom()->update(myPlayer);
		cout << endl;
		
		if (myPlayer.getHealth() < 0)
		{
			cout << "Health: 0" << endl;
		}
		else
		{
			cout << "Health: " << myPlayer.getHealth() << endl << endl;
		}
	}

	if (myPlayer.getHealth() > 0)
	{
		cout << endl;
		cout << "Your location is ";
		cout << myPlayer.getRoom()->getName() << endl;
	}
}

Player& Game::getPlayer()
{
	return myPlayer;
}

void Game::listGoal()
{
	cout << "To fulfill your destiny and claim your spot as the one true king," << endl;
	cout << "you must first find the Sword of Virtue and return it to its rightful" << endl;
	cout << "place in the Throne Room. It is rumored that the Sword is locked up" << endl;
	cout << "somewhere in or around the castle. You may need to find a key to free it." << endl;
	cout << "Be aware of your health. I will decrease with each move you make through the" << endl;
	cout << "castle, so your time to search will be limited. Look for the Map Room. It will" << endl;
	cout << "tell you where you are. Some rooms will offer help, while others posses danger."<< endl;
	cout << "Find the Key to unlock the Sword! Good luck on your quest." << endl;
}

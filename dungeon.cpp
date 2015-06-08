#include "dungeon.h"
#include "item.h"
#include "player.h"
#include <iostream>

using namespace std;

string Dungeon::getName()
{
	string name = "Dungeon";
	return name;
}

int Dungeon::getRoomNumber()
{
	return 7;
}

void Dungeon::update(Player& myPlayer)
{
	char getSword;

	cout << "The Sword is locked in a cell in the Dungeon.";
	cout << "Would you like to get it out? Y/N" << endl;
	cin >> getSword;

	if (getSword == 'Y' || getSword == 'y')
	{
		if (myPlayer.getBag().containsItem(KEY))
		{
			myPlayer.getBag().removeItem(KEY);
			myPlayer.getBag().addItem(SWORD);
		}
		else
		{
			cout << "You do not have the Key." << endl;
		}
	}
	
	myPlayer.decreaseHealth(1);

}

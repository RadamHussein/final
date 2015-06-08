#include "mines.h"
#include "item.h"
#include "player.h"
#include <iostream>

using namespace std;

string Mines::getName()
{
	string name = "The Mines";
	return name;
}

int Mines::getRoomNumber()
{
	return 9;
}

void Mines::update(Player& myPlayer)
{
	if (!myPlayer.getBag().containsItem(GOLD2))
	{
		myPlayer.getBag().addItem(GOLD2);
		cout << "You found some gold." << endl;
	}
	myPlayer.decreaseHealth(1);
}

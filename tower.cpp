#include "tower.h"
#include "item.h"
#include "player.h"
#include <iostream>

using namespace std;

string Tower::getName()
{
	string name = "The Tower";
	return name;
}

int Tower::getRoomNumber()
{
	return 3;
}

void Tower::update(Player& myPlayer)
{
	if (!myPlayer.getBag().containsItem(GOLD1))
	{
		myPlayer.getBag().addItem(GOLD1);
		cout << "You found some gold." << endl;
	}
	myPlayer.decreaseHealth(1);
}

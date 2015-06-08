#include "catacombs.h"
#include "item.h"
#include "player.h"
#include <iostream>

using namespace std;

string Catacombs::getName()
{
	string name = "Catacombs";
	return name;
}

int Catacombs::getRoomNumber()
{
	return 4;
}

void Catacombs::update(Player& myPlayer)
{
	if (!myPlayer.getBag().containsItem(POTION))
	{
		myPlayer.getBag().addItem(POTION);
		cout << "You found a vile of potion. You may use this";
		cout << " at any time to restore your health." << endl;
	}
	myPlayer.decreaseHealth(1);
}

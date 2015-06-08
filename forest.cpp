#include "forest.h"
#include "player.h"
#include <iostream>

using namespace std;

string Forest::getName()
{
	string name = "The Forest";
	return name;
}

int Forest::getRoomNumber()
{
	return 6;
}

void Forest::update(Player& myPlayer)
{
	myPlayer.getBag().addItem(KEY);
	cout << "You found the Key." << endl;

	myPlayer.decreaseHealth(1);
}


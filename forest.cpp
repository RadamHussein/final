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
	cout << "Beware the cursed Forest. Potions will not work here." << endl;
	if(!myPlayer.getBag().containsItem(KEY))
	{
		myPlayer.getBag().addItem(KEY);
		cout << "You found the Key in the Forest." << endl;
	}
	myPlayer.decreaseHealth(1);
}


#include "forest.h"
#include "player.h"
#include <iostream>

using namespace std;

string Forest::getName()
{
	string name = "The Forest";
	return name;
}

void Forest::update(Player& myPlayer)
{
	myPlayer.addHealth(2);
	cout << "You found some food!" << endl;
}


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

void Mines::update(Player& myPlayer)
{
	myPlayer.getBag().addItem(GOLD);
	cout << "You found some gold." << endl;
	myPlayer.decreaseHealth(1);
}

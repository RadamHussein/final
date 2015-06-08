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
	myPlayer.getBag().addItem(POTION);
	cout << "You found a vile of potion." << endl;
	myPlayer.decreaseHealth(1);
}

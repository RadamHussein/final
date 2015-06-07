#include "mines.h"
#include "player.h"

string Mines::getName()
{
	string name = "The Mines";
	return name;
}

void Mines::update(Player& myPlayer)
{
	myPlayer.decreaseHealth();
}

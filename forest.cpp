#include "forest.h"
#include "player.h"

string Forest::getName()
{
	string name = "The Forest";
	return name;
}

void Forest::update(Player& myPlayer)
{
	myPlayer.addHealth();
}


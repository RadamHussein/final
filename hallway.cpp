#include "hallway.h"
#include "player.h"

string Hallway::getName()
{
	string name = "Hallway";
	return name;
}

void Hallway::update(Player& myPlayer)
{
	myPlayer.decreaseHealth();
}

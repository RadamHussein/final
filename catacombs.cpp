#include "catacombs.h"
#include "player.h"

string Catacombs::getName()
{
	string name = "Catacombs";
	return name;
}

void Catacombs::update(Player& myPlayer)
{
	myPlayer.decreaseHealth();
}

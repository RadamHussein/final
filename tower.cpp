#include "tower.h"
#include "player.h"

string Tower::getName()
{
	string name = "The Tower";
	return name;
}

void Tower::update(Player& myPlayer)
{
	myPlayer.decreaseHealth();
}

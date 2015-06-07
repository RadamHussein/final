#include "dungeon.h"
#include "player.h"

string Dungeon::getName()
{
	string name = "Dungeon";
	return name;
}

void Dungeon::update(Player& myPlayer)
{
	myPlayer.decreaseHealth();
}

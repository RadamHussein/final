#include "dungeon.h"
#include "item.h"
#include "player.h"

string Dungeon::getName()
{
	string name = "Dungeon";
	return name;
}

void Dungeon::update(Player& myPlayer)
{
	myPlayer.getBag().addItem(SWORD);
	myPlayer.decreaseHealth(1);
}

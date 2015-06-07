#include "mapRoom.h"
#include "item.h"
#include "player.h"

string MapRoom::getName()
{
	string name = "Map Room";
	return name;
}

void MapRoom::update(Player& myPlayer)
{
	myPlayer.getBag().addItem(SWORD);
}

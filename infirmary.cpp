#include "infirmary.h"
#include "player.h"

string Infirmary::getName()
{
	string name = "Infirmary";
	return name;
}

void Infirmary::update(Player& myPlayer)
{
	myPlayer.decreaseHealth();
}

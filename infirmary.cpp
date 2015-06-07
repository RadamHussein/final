#include "infirmary.h"
#include "player.h"
#include <iostream>

using namespace std;

string Infirmary::getName()
{
	string name = "Infirmary";
	return name;
}

void Infirmary::update(Player& myPlayer)
{
	myPlayer.decreaseHealth(4);
	cout << "There is sickness in the infirmary. ";
	cout << "You lose more health." << endl;
}

#include "infirmary.h"
#include "player.h"
#include <iostream>

using namespace std;

string Infirmary::getName()
{
	string name = "Infirmary";
	return name;
}

int Infirmary::getRoomNumber()
{
	return 2;
}

void Infirmary::update(Player& myPlayer)
{
	myPlayer.decreaseHealth(5);
	cout << "There is sickness in the infirmary. ";
	cout << "You lose more health." << endl;
}

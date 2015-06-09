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
	cout << "There is sickness in the infirmary. ";
	cout << "You lose more health." << endl;

	if (myPlayer.getHealth() < 4)
	{
		cout << "The sickness has overtaken you" << endl;
		myPlayer.decreaseHealth(5);
	}
	else
	{
		myPlayer.decreaseHealth(5);
	}
}

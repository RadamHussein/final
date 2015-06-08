#include "greatHall.h"
#include "player.h"
#include <iostream>

using namespace std;

string GreatHall::getName()
{
	string name = "Great Hall";
	return name;
}

int GreatHall::getRoomNumber()
{
	return 8;
}
/*
void GreatHall::update(Player& myPlayer)
{
	cout << "You found some food!" << endl;
	myPlayer.addHealth(2);
}
*/

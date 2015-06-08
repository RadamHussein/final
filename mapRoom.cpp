#include "mapRoom.h"
#include "player.h"
#include <iostream>
#include <iomanip>

using namespace std;

string MapRoom::getName()
{
	string name = "Map Room";
	return name;
}

int MapRoom::getRoomNumber()
{
	return 5;
}

void MapRoom::update(Player& myPlayer)
{
	//print map
	cout << endl;	
	cout << "Infirmary" << "-----" << "Catacombs" << "-----";
	cout << "Dungeon" << endl;
	cout << setw(5) << "|" << setw(14) << "|" << setw(14) << "|" << endl;
	cout << setw(5) << "|" << setw(14) << "|" << setw(14) << "|" << endl;
	cout << " Hallway" << "-------" << "MapRoom" << "-----";
	cout << "Great Hall" << "-----" << "Throne Room" << endl;
	cout << setw(5) << "|" << setw(14) << "|" << setw(14) << "|" << endl;
	cout << setw(5) << "|" << setw(14) << "|" << setw(14) << "|" << endl;
	cout << "  Tower" << "---------" << "Forest" << "------";
	cout << "The Mines" << endl << endl;

	//decrease health	
	myPlayer.decreaseHealth(1);
}

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
	char viewMap;

	cout << "Would you like to view the map? Y/N" << endl;
	cin >> viewMap;

	if (viewMap == 'Y' || viewMap == 'y')
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
	}	
	myPlayer.decreaseHealth(1);
}

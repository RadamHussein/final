#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

enum Item {SWORD, KEY, POTION, FOOD};

string itemToString(Item item)
{
	if(Item::SWORD == item)
	{
		return "SWORD";
	}		
	else if (Item::KEY == item)
	{
		return "KEY";
	}
	else if (Item::POTION == item)
	{
		return "POTION";
	}
	else
	{
		return "FOOD";
	}
}	
#endif

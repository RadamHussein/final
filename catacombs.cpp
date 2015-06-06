#include "catacombs.h"

string Catacombs::getName()
{
	string name = "Catacombs";
	return name;
}

vector<Item> Catacombs::getItems()
{
	vector<Item> items;
	items.push_back(Item::POTION);
	items.push_back(Item::FOOD);

	return items;
}

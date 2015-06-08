#include "bag.h"
#include <iostream>

using namespace std;

Bag::Bag(size_t size) : capacity(size), items()
{
}

//TODO: consider exception for bag that has reached capacity
void Bag::addItem(Item item)
{
	if (items.size() < capacity)
	{
		if (!containsItem(item))
		{
			items.push_back(item);
		}
	}
}

void Bag::removeItem(Item item)
{
	for (size_t x = 0; x <items.size(); x++)
	{
		if (items[x] == item)
		{
			items.erase (items.begin()+x);
			break;
		}
	}
}

bool Bag::containsItem(Item item)
{
	for (size_t x = 0; x < items.size(); x++)
	{
		if (items[x] == item)
		{
			return true;
		}
	}
	return false;
}

bool Bag::isEmpty()
{
	return items.empty();
}

void Bag::printBag()
{
	cout << "Your bag contains: ";
	for (size_t x = 0; x < items.size(); x++)
	{
		if (items[x] == SWORD)
		{
			cout << "SWORD ";
		}
		else if (items[x] == KEY)
		{
			cout << "KEY ";
		}
		else if (items[x] == POTION)
		{
			cout << "POTION ";
		}
		else if (items[x] == GOLD1)
		{
			cout << "GOLD ";
		}
		else if (items[x] == GOLD2)
		{
			cout << "GOLD";
		}
	}
	cout << endl;
}
 

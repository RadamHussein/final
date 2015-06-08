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
		if (containsItem(POTION))
		{
			//do nothing
			cout << "you already have a potion" << endl;
		}
		else if (containsItem(SWORD))
		{
			//do nothing
			cout << "you already have a sword" << endl;
		}
		else if (containsItem(KEY))
		{
			//do nothing
			cout << "you already have a key" << endl;
		}
		else
		{
			cout << "Item added to your bag" << endl;
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
		else if (items[x] == GOLD)
		{
			cout << "GOLD ";
		}
	}
	cout << endl;
}
 

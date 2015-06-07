#include "bag.h"

Bag::Bag(size_t size) : capacity(size), items()
{
}

//TODO: consider exception for bag that has reached capacity
void Bag::addItem(Item item)
{
	if (items.size() < capacity)
	{
		items.push_back(item);
	}
}

void Bag::removeItem(Item item)
{}

bool Bag::containsItem(Item item)
{
	for (int x = 0; x < items.size(); x++)
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

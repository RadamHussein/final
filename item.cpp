#include "item.h"

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


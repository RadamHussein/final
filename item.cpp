#include "item.h"

string itemToString(Item item)
{
	if (SWORD == item)
	{
		return "SWORD";
	}
	else if (KEY == item)
	{
		return "KEY";
	}
	else if (POTION == item)
	{
		return "POTION";
	}
	else
	{
		return "FOOD";
	}
}


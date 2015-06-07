#ifndef BAG_H
#define BAG_H
#include <vector>
#include "item.h"

using namespace std;

class Bag
{
private:
	int capacity;
	vector<Item> items;
public:
	Bag(int size);
	void addItem(Item);
	void removeItem(Item);
	bool containsItem(Item);
};
#endif

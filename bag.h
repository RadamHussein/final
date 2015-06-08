#ifndef BAG_H
#define BAG_H
#include <vector>
#include "item.h"

using namespace std;

class Bag
{
private:
	size_t capacity;
	vector<Item> items;
public:
	Bag(size_t size);
	void addItem(Item);
	void removeItem(Item);
	bool containsItem(Item);
	bool isEmpty();
	void printBag();
};
#endif

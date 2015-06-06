#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

enum Item {SWORD, KEY, POTION, FOOD};

string itemToString(Item item);
#endif

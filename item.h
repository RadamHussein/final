#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

typedef enum {SWORD, KEY, POTION, GOLD} Item;

string itemToString(Item item);
#endif

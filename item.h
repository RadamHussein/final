#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

typedef enum {SWORD, KEY, POTION, GOLD1, GOLD2} Item;

string itemToString(Item item);
#endif

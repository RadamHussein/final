#ifndef DUNGEON_H
#define DUNGEON_H
#include "Room.h"

class Dungeon : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif

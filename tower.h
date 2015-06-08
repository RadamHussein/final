#ifndef TOWER_H
#define TOWER_H
#include "Room.h"

class Tower : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif

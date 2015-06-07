#ifndef GREATHALL_H
#define GREATHALL_H
#include "Room.h"

class GreatHall : public Room
{
public:
	virtual string getName();
	virtual void update(Player&);
};
#endif

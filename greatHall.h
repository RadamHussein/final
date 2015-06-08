#ifndef GREATHALL_H
#define GREATHALL_H
#include "Room.h"

class GreatHall : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif

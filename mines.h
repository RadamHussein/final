#ifndef MINES_H
#define MINES_H
#include "Room.h"

class Mines : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif

#ifndef CATACOMBS_H
#define CATACOMBS_H
#include "Room.h"

class Catacombs : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif

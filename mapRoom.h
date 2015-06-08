#ifndef MAPROOM_H
#define MAPROOM_H
#include "Room.h"

class MapRoom : public Room
{
public:
	virtual string getName();
	virtual int getRoomNumber();
	virtual void update(Player&);
};
#endif

#ifndef ROOM_H
#define ROOM_H
#include "abstractRoom.h"

class Room : public AbstractRoom
{
private:
	AbstractRoom *up;
	AbstractRoom *down;
	AbstractRoom *left;
	AbstractRoom *right;
	//int affect_health;
public:
	Room();
	virtual void setUp(AbstractRoom *up);
	virtual void setDown(AbstractRoom *down);
	virtual void setLeft(AbstractRoom *left);
	virtual void setRight(AbstractRoom *right);
	virtual AbstractRoom* getUp();
	virtual AbstractRoom* getDown();
	virtual AbstractRoom* getLeft();
	virtual AbstractRoom* getRight();
	virtual void update(Player&);
};
#endif

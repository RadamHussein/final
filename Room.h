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
public:
	Room();
	void setUp(AbstractRoom *up);
	void setDown(AbstractRoom *down);
	void setLeft(AbstractRoom *left);
	void setRight(AbstractRoom *right);
	AbstractRoom* getUp();
	AbstractRoom* getDown();
	AbstractRoom* getLeft();
	AbstractRoom* getRight();
	vector<Item> getItems();
};
#endif

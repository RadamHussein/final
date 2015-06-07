#ifndef PLAYER_H
#define PLAYER_H
#include "bag.h"

class AbstractRoom;
class Player
{
private:
	static const int BAG_SIZE = 3;
	Bag bag;
	AbstractRoom *room;
	void setRoomIfNotNull(AbstractRoom* newRoom);
public:
	Player(AbstractRoom *ptrRoom);
	AbstractRoom* getRoom();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	Bag& getBag();
};
#endif

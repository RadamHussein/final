#ifndef PLAYER_H
#define PLAYER_H
#include "bag.h"

class AbstractRoom;
class Player
{
private:
	static const int DEFAULT_HEALTH = 10;
	static const size_t BAG_SIZE = 3;
	Bag bag;
	int health;
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
	void decreaseHealth(int amount);
	void addHealth(int);
	int getHealth();
};
#endif

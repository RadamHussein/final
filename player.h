#ifndef PLAYER_H
#define PLAYER_H
#include "abstractRoom.h"

class Player
{
private:
	AbstractRoom *room;
	void setRoomIfNotNull(AbstractRoom* newRoom);
public:
	Player(AbstractRoom *room);
	AbstractRoom* getRoom();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
};
#endif

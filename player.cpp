#include "player.h"

//TODO: consider throwing an exception if room is NULL
Player::Player(AbstractRoom *room)
{
	this->room = room;
}

AbstractRoom* Player::getRoom()
{
	return room;
}

void Player::setRoomIfNotNull(AbstractRoom* newRoom)
{
	if(newRoom != NULL)
	{
		room = newRoom;
	}
}

void Player::moveUp()
{
	setRoomIfNotNull(room->getUp());
}

void Player::moveDown()
{
	setRoomIfNotNull(room->getDown());
}

void Player::moveLeft()
{
	setRoomIfNotNull(room->getLeft());
}

void Player::moveRight()
{
	setRoomIfNotNull(room->getRight());
}

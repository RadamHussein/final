#include "player.h"
#include "abstractRoom.h"
#include <iostream>

using namespace std;

//TODO: consider throwing an exception if room is NULL
Player::Player(AbstractRoom *ptrRoom) : bag(BAG_SIZE), health(DEFAULT_HEALTH), room(ptrRoom)
{
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

Bag& Player::getBag()
{
	return bag;
}

void Player::decreaseHealth(int amount)
{
	health -= amount;
}

void Player::addHealth(int amount)
{
	health += amount;
}

int Player::getHealth()
{
	return health;
}

#include "player.h"
#include "abstractRoom.h"
#include <iostream>

using namespace std;

//TODO: consider throwing an exception if room is NULL
Player::Player(AbstractRoom *ptrRoom) : bag(BAG_SIZE), room(ptrRoom)
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

void Player::decreaseHealth()
{
	health = health - 1;
	cout << "Health: " << health << endl;

	if (health < 3)
	{
		cout << "You must find food. Health is running out.";
		cout << endl;
	}
}

void Player::addHealth()
{
	health = health + 2;
	cout << "You found some food. Health has been increased." << endl;
	cout << "Health: " << health << endl;
}


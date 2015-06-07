#include "Room.h"
#include "player.h"

Room::Room() : up(NULL), down(NULL), left(NULL), right(NULL)
{
}

void Room::setUp(AbstractRoom *up)
{
	this->up = up;
}

void Room::setDown(AbstractRoom *down)
{
	this->down = down;
}

void Room::setLeft(AbstractRoom *left)
{
	this->left = left;
}

void Room::setRight(AbstractRoom *right)
{
	this->right = right;
}

AbstractRoom* Room::getUp()
{
	return up;
}

AbstractRoom* Room::getDown()
{
	return down;
}

AbstractRoom* Room::getLeft()
{
	return left;
}

AbstractRoom* Room::getRight()
{
	return right;
}

void Room::update(Player& player)
{
	player.decreaseHealth(1);
}

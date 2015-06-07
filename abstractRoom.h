#ifndef ABSTRACT_ROOM_H
#define ABSTRACT_ROOM_H
#include <string>
#include <vector>
#include "item.h"

using namespace std;

class Player;
class AbstractRoom
{
public:
	virtual string getName() = 0;
	virtual void setUp(AbstractRoom *up) = 0;
	virtual void setDown(AbstractRoom *down) = 0;
	virtual void setLeft(AbstractRoom *left) = 0;
	virtual void setRight(AbstractRoom *right) = 0;
	virtual AbstractRoom* getUp() = 0;
	virtual AbstractRoom* getDown() = 0;
	virtual AbstractRoom* getLeft() = 0;
	virtual AbstractRoom* getRight() = 0;
	virtual void update(Player&) = 0;	//pass in player, do shit to player
};
#endif

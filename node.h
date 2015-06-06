#include <stddef.h>
#include "Room.h"
#ifndef NODE_H
#define NODE_H

struct NODE
{
	Room *ptrRoom;
	Node *up;
	Node *down;
	Node *left;
	Node *right;
	Node(Room *ptrRoom)
	{
		

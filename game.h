#ifndef GAME_H
#define GAME_H
#include "player.h"

class AbstractRoom;
class Game
{
private:
	Player myPlayer;
	AbstractRoom *finish;
public:
	Game(AbstractRoom *start, AbstractRoom *finish);
	bool isGameOver();
	void handleUserInput(int input);
	Player& getPlayer();	
};
#endif

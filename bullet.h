#ifndef _INCL_BUl
#define _INCL_BUL

#include "point.h"
#include "stdbool.h"

// Needed for bullet.cpp
#include "game.h"
#include "player.h"

typedef struct bullet{
	Point pos;
	bool player_bullet;

} Bullet;
#endif _INCL_BUL

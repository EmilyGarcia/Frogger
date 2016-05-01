#pragma once
#include "object.h"
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player : public Object
{
private:
	string playerName;
	int numLives;
	bool isHit;


public:
	Player();
	Player( string playerName, int numLives, bool isHit );
	void setPlayerName( string playerName );
	void setNumLives( int numLives );
	void setIsHit( bool isHit );

	string getPlayerName() const{ return playerName; }
	int getNumLives() const{ return numLives; }
	bool getIsHit() const{ return isHit; }
};
#endif
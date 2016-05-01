#pragma once
#ifndef PLAYER_H
#define PLAYER_H
class Player : public Object
{
private:
	string playerName;
	int numLives;
	bool isHit;


public:
	Player();
	Player(string playerName, int numLives, bool is Hit);
	void setPlayerName(string playerName);
	void setNumLives(string numLives);
	void setIsHit(isHit);

	string getPlayerName(string playerName) {return playerName; }
	int getNumLives(int numLives) { return numLives; }
	bool getIsHit(bool isHit) { return isHit; }

	




};
#endif
#include"player.h"
#include<iostream>
#include<string>
using namespace std;




Player::Player()
{
	playerName = "none";
	numLives = 2;
	isHit = false;
	cout << " default constructor ran " << endl;


}
Player::Player(string playerName, int numLives, bool isHit)
{
	this->playerName = playerName;
	this->numLives = numLives;
	this-> isHit = isHit

}
void Player::setPlayerName(string playerName)
{
	this->playerName = playerName;

}
void Player::setNumLives(string numLives)
{
	this->numLives = numLives;


}
void Player::setIsHit(isHit)
{
	this->isHit = isHit;


}

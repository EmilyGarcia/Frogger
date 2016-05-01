#pragma once
#ifndef OBJECT_H
#define OBJECT_H
#include "SFML/graphics.hpp"
#include <string>
using namespace std;

class Object {
protected:
    sf::Sprite obj;
	bool right;
	bool left;
	string spriteName;
	int posX;
	int posY;
	double speed;
public:
	Object();
    Object(sf::Sprite& obj, string objName, int posX, int posY, double speed, bool right, bool left);
	// Mutators
    void setRight(bool right);
	void setLeft(bool left);
	void setSpriteName(string spriteName);
	void setPosX(int posX);
	void setPosY(int posY);
	void setSpeed(double speed);
    // Accessors
	bool getRight( bool right )const { return right; }
	bool getLeft( bool left )const { return left; }
	string getSpriteName( string spriteName ) const{ return spriteName; }
    int getPosX( int posX )const { return posX; }
	int getPosY( int posY )const { return posY; }
	double getSpeed( double speed )const { return speed; }
};
#endif
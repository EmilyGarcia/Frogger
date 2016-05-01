#include"object.h"
#include<iostream>
#include<string>
using namespace std;



Object::Object()
{
	right = true;
	left = false;
	spriteName = "";
	posX = 0;
    posY = 0;
	speed = 1;
}

Object::Object(sf::Sprite& obj, string objName, int posX, int posY, double speed, bool right, bool left)
{
    this->obj = obj;
    this->right = right;
    this->left = left;
    this->spriteName = spriteName;
    this->posX = posX;
    this->posY = posY;
    this->speed = speed;
}
void Object::setRight(bool right)
{
	this->right = right;
	
}
void Object::setLeft(bool left)
{
	this->left = left;
	
}
void Object::setSpriteName(string spriteName)
{
	this->spriteName = spriteName;
		
}
void Object::setPosX(int posX)
{
	this->posX = posX;
}
void Object::setPosY(int posY)
{
	this->posY = posY;
}
void Object::setSpeed(double speed)
{
	this->speed = speed;
}



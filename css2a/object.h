#pragma once
#ifndef OBJECT_H
#define OBJECT_H
class Object {
protected:
	sf::Sprite obj;
	sf:Texture objTexture;
	sf::IntRect rectSprite;
	bool right;
	bool left;
	string objName;
	int posX;
	int posY;
	double speed;
public:
	Object();
	//Object(string objName, int posX, int posY, double speed, bool right, bool left);

	void setRight(bool right);
	void setLeft(bool left);
	void setSpriteName(string spriteName);
	void setPosX(int posX);
	void setPosY(int posY);
	void setSpeed(double speed);
	

	bool getRight(bool right)const { return right; }
	bool getLeft(bool left)const { return left; }
	string getSpriteName(string spriteName) const{ return spriteName; }
	int getPosX(int posX)const { return posX };
	int getPosY(int posY)const { return posY; }
	double getSpeed(double speed)const { return speed; }



};
#endif
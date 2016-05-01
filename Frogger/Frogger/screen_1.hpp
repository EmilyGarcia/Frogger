#include <iostream>
#include "cScreen.hpp"
#include "ResourcePath.hpp"
#include <SFML/Graphics.hpp>
#include "player.h"

class screen_1 : public cScreen
{
private:
	float movement_step;
	float posx;
	float posy;
    // Frog
	sf::Sprite frogger;
    sf::Texture frog;
    sf::IntRect rectSourceSprite;
    // Background
    sf::Sprite background;
    sf::Texture back;
    // Car
    sf::Sprite car;
    sf::Texture carText;
    sf::IntRect carSourceSprite;
    // Player
    Player mainPlayer;
	


public:
	screen_1(void);
	virtual int Run(sf::RenderWindow &App);
	
};

screen_1::screen_1(void)
{
	//sf::Texture frog;
	frog.loadFromFile(resourcePath() + "spritesheet.png");
	rectSourceSprite.left = 0;
	rectSourceSprite.top = 0;
	rectSourceSprite.width = 75;
	rectSourceSprite.height = 150;
	frogger.setTexture(frog, true);
	frogger.setTextureRect(rectSourceSprite);
    //frogger.setOrigin(sf::Vector2f(37, 75));
    // Background
    back.loadFromFile(resourcePath() + "background.jpg");
    background.setTexture(back);
    
    // Player Info
    mainPlayer.setNumLives(3);
    mainPlayer.setIsHit(false);
    
    // Car
    carText.loadFromFile(resourcePath() + "spritesheet.png");
    carSourceSprite.left = 0;
    carSourceSprite.top = 0;
    carSourceSprite.width = 75;
    carSourceSprite.height = 150;
    car.setTexture(carText, true);
    car.setTextureRect(carSourceSprite);
}

int screen_1::Run(sf::RenderWindow &App)
{
	sf::Event Event;
	bool Running = true;

    
    
	while (Running)
	{
		//Verifying events
		while (App.pollEvent(Event))
		{
			// Window closed
			if (Event.type == sf::Event::Closed)
			{
				return (-1);
			}
            
			//Key pressed
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && !(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down)))
			{
				sf::Vector2f pos = frogger.getPosition();

				if (pos.x <= 0)
				{
					frogger.move(0, 0);
				}// end if
				else
				{
					if (rectSourceSprite.left != 225)
					{
						rectSourceSprite.left = 225;
						frogger.setTextureRect(rectSourceSprite);
					}// end if

					frogger.move(-35, 0);

				}// end else
			}// end if
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				sf::Vector2f pos = frogger.getPosition();

				if (pos.x >= 730)
				{
					frogger.move(0, 0);
				}// end if
				else
				{
					if (rectSourceSprite.left != 85)
					{
						rectSourceSprite.left = 85;
						frogger.setTextureRect(rectSourceSprite);
					}// end if

					frogger.move(35, 0);

				}// end else
			}// end if
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				sf::Vector2f pos = frogger.getPosition();

				if (pos.y <= -30)
				{
					frogger.move(0, 0);
				}// end if
				else
				{
					if (rectSourceSprite.left != 0)
					{
						rectSourceSprite.left = 0;
						frogger.setTextureRect(rectSourceSprite);
					}// end if

					frogger.move(0, -35);
				}
			}// end if
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				sf::Vector2f pos = frogger.getPosition();

				if (pos.y >= 530)
				{
					frogger.move(0, 0);
				}// end if
				else
				{
					if (rectSourceSprite.left != 139)
					{
						rectSourceSprite.left = 139;
						frogger.setTextureRect(rectSourceSprite);
					}// end if

					frogger.move(0, 35);

				}// end else
			}// end if
		
		}

        //Clearing screen
		App.clear(sf::Color(0, 0, 0, 0));
		//Drawing
        App.draw(background);
		App.draw(frogger);
		App.display();
	}

	//Never reaching this point normally, but just in case, exit the application
	return -1;
}
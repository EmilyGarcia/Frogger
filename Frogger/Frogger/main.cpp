//
// Disclamer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resource, use the helper
// method resourcePath() from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you ! Have a look.
#include "ResourcePath.hpp"

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    
    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
    // Background
    sf::Texture background;
    if (!background.loadFromFile(resourcePath() + "background.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(background);
    
    // Frogger
    sf::Texture frog;
    if (!frog.loadFromFile(resourcePath() + "spritesheet.png")) {
        return EXIT_FAILURE;
    }
    sf::IntRect rectSourceSprite(0, 0, 300, 400);
    
    sf::Sprite frogger(frog, rectSourceSprite);
    
    // Create a graphical text to display
    //sf::Font font;
    //if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
    //    return EXIT_FAILURE;
    //}
    //sf::Text text("Hello SFML", font, 50);
    //text.setColor(sf::Color::Black);
    
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "froggerTheme.ogg")) {
        return EXIT_FAILURE;
    }
    
    // Play the music
    music.play();
    
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                sf::Vector2f pos = frogger.getPosition();
                
                if (pos.x <= 0)
                {
                    frogger.move(0,0);
                }
                else
                {
                    if ()
                        frogger.move(-35,0);
                }
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                frogger.move(35,0);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                frogger.move(0,-35);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                frogger.move(0,35);
            }
            
            
            
            
            
            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }
        
        // Clear screen
        window.clear();
        
        // Draw the sprite
        window.draw(sprite);
        
        // Draw the string
        window.draw(text);
        
        // Update the window
        window.display();
    }
    
    return EXIT_SUCCESS;
}

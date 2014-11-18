#include "SFML/Graphics.hpp"
#include <iostream>

using namespace std;

int main()
{

	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORKS!");
	sf::Texture texture;

	if (!texture.loadFromFile("Fat-Pig.png"))
	{
		cout << "Error! Couldnt find texture!" << endl;
	}

	sf::Sprite sprite(texture);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
			{
				window.close();
			}


			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				//cout << sf::Mouse::getPosition().x << endl;
				cout << sf::Mouse::getPosition(window).x << " x "<< sf::Mouse::getPosition(window).y << endl;
			}


			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			/* 
			case sf::Event::MouseMoved:
				cout << event.mouseMove.x << " x " << event.mouseMove.y << endl;
				break;
			*/
			}

		}

		window.clear();

		window.draw(sprite);

		window.display();
	}

}
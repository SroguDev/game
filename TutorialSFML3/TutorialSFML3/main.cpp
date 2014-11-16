#include "SFML/Graphics.hpp"
#include <iostream>

using namespace std;

int main()
{

	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORKS!");
	sf::Texture texture;

	if (!texture.loadFromFile("Fat-Pig.png"))
	{
		cout << "Error loading Pig texture" << endl;
	}

	sf::Sprite sprite(texture);
	/*
	lub mozna
	sf::Sprite sprite;
	spite.setTexture(texture);
	*/

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		window.clear();

		window.draw(sprite);

		window.display();
	}

}
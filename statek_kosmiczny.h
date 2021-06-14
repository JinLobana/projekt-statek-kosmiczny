#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

class statek_kosmiczny : public sf::Sprite
{
protected:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f velocity;
	sf::FloatRect bounds;
	sf::Vector2f pozycja;

public:
	statek_kosmiczny();
	void Kolizja();
	void animuj(sf::RenderTarget& target, sf::Event& ev, float time);
	virtual ~statek_kosmiczny();

};


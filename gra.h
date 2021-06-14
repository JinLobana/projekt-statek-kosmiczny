#pragma once

#include <iostream>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

//okno gry 
class gra
{

private:
	sf::RenderWindow* window;
	sf::Event ev;


	//inicjowanie zmiennych
	void initvariables();
	void initWindow();

public:
	// zmienne publiczne
	const bool windowisopen() const;


	//konstruktor / destruktor
	gra();
	virtual ~gra();

	void pollEvents();
	void update();
	void render();



};


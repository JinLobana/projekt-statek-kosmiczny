#pragma once
#include "statek_kosmiczny.h"

class meteoryty : public statek_kosmiczny
{
public:
	meteoryty();
	~meteoryty();
	void animuj(sf::RenderTarget &target);
};

class bomby : public meteoryty
{
public:
	bomby();
	~bomby();
	void animu(sf::RenderTarget& target);
};


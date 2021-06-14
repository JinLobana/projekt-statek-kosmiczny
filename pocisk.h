#pragma once
#include "statek_kosmiczny.h"

class pocisk : public statek_kosmiczny
{
public:
	pocisk(sf::Vector2f vec);
	~pocisk();
	void animu(sf::RenderTarget &target,float time);
};


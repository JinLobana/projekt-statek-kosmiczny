#pragma once
#include "statek_kosmiczny.h"

class pocisk : public statek_kosmiczny
{
public:
	pocisk();
	~pocisk();
	void animu(sf::RenderTarget &target,float time);
};


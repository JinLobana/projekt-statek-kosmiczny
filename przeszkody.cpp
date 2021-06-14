#include "przeszkody.h"

//wszystko do meteorytow
meteoryty::meteoryty()
{
	float x = 200;//rand()%800+1; 
	float y = 100.f;
	this->texture.loadFromFile("meteoryt.png");
	this->sprite.setTexture(this->texture);
	this->sprite.setScale(1.1f, 1.1f);
	this->sprite.setPosition(x, y);

}

meteoryty::~meteoryty()
{
}

void meteoryty::animuj(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}




//wszystko do bomb



bomby::bomby()
{
	this->texture.loadFromFile("bomba.png");
	this->sprite.setTexture(this->texture);
	this->sprite.setScale(0.5f, 0.5f);
	this->sprite.setPosition(200,200);

}

bomby::~bomby()
{
}

void bomby::animu(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
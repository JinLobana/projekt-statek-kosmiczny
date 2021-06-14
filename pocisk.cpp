#include "pocisk.h"

pocisk::pocisk()
{
	this->texture.loadFromFile("pocisk.png");
	this->sprite.setTexture(texture);
	this->sprite.setScale(0.8f, 0.8f);
	this->bounds = statek_kosmiczny::sprite.getGlobalBounds();

	this->sprite.setPosition(bounds.left, bounds.top);

	this->velocity.x = 0; this->velocity.y = 0;
}

pocisk::~pocisk()
{
}

void pocisk::animu(sf::RenderTarget &target, float time)
{
	this->sprite.move(velocity);
	target.draw(this->sprite);
}

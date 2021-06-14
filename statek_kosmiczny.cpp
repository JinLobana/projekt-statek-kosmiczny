#include "statek_kosmiczny.h"




statek_kosmiczny::statek_kosmiczny()
{
	this->texture.loadFromFile("statek2.png");
	this->sprite.setTexture(texture);
	this->sprite.setScale(0.5f, 0.5f);
	this->sprite.setPosition(400.f, 540.f);
	
	this->velocity.x = 150.f;
	this->velocity.y = 0;

}

void statek_kosmiczny::Kolizja()
{
	pozycja = this->sprite.getPosition();
	bounds = this->sprite.getGlobalBounds();
	std::cout << bounds.left << std::endl << bounds.top << std::endl << bounds.height << std::endl << bounds.width << std::endl;
}

void statek_kosmiczny::animuj(sf::RenderTarget &target, sf::Event &ev, float time)
{
	this->Kolizja();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
	{
		if (pozycja.x <= 1) {this->velocity.x = 0.f;}
		else { this->velocity.x = 180.f; }
		this->sprite.move(-velocity.x * time, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
	{
		if (pozycja.x + bounds.width >= 799) { this->velocity.x = 0.f; }
		else { this->velocity.x = 180.f; }
		this->sprite.move(velocity.x *time, 0.f);
	}
	

	target.draw(this->sprite);
}

statek_kosmiczny::~statek_kosmiczny()
{
}

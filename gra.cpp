#include "gra.h"

//prywatne funkcje
void gra::initvariables()
{
	this->window = nullptr;
}

// tworzenie okna
void gra::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "gra");
    this->window->setFramerateLimit(60);
}

//sprawdzanie czy gra jest otwarta
const bool gra::windowisopen() const
{
	return this->window->isOpen();
}

//konstruktor
gra::gra()
{
	this->initvariables();
	this->initWindow();
}

//destruktor
gra::~gra()
{
	delete this->window;
}

void gra::pollEvents()
{
    while (this->window->pollEvent(this->ev))
    {
        switch (this->ev.type)
        {
        case sf::Event::Closed:
            this->window->close();
            break;
        }

        switch (ev.key.code)
        {
        case sf::Keyboard::Key::Escape:
            this->window->close();
            break;
            /* case sf::Keyboard::Key::W:
                 statek.move(0, -10);
                 break;
             case sf::Keyboard::Key::S:
                 statek.move(0, 10);
                 break;
             case sf::Keyboard::Key::Left:
                 statek.move(-10, 0);
                 break;
             case sf::Keyboard::Key::Right:
                 statek.move(10, 0);
                 break;*/
        }
    }
}

void gra::update()
{
    this->pollEvents();

    std::cout << "pozycja myszy: " << sf::Mouse::getPosition(*this->window).x << "   " << sf::Mouse::getPosition(*this->window).y<<std::endl;
}

void gra::render()
{
    this->window->clear(sf::Color::Black);

    this->window->display();
}


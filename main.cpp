#include <memory>
#include "przeszkody.h"
#include "statek_kosmiczny.h"
#include "pocisk.h"
//#include "gra.h"
#include <vector>

int main()
{
    srand(time(NULL));
    sf::Clock czas;
    float dt = 0;
    //tworzenie okna oraz zdarzenia
    sf::RenderWindow okno(sf::VideoMode(800, 600), "menu");
    sf::Event zdarzenie;
    
    //tworzenie obiektow 
    statek_kosmiczny statek;

    std::vector<meteoryty*> meteory;
    meteoryty m;
    bomby b;
    for (size_t i = 0; i < 18; i++)
    {
        meteoryty* meteor = new meteoryty;
        meteory.push_back(meteor);
    }

    std::vector<pocisk*> pociski;
    //dodatkowe funkcje
    okno.setFramerateLimit(60);
    


    //pêtla okna menu
    while (okno.isOpen())
    {
        dt = czas.restart().asSeconds();

        
        //pêtla zdarzeñ
        while (okno.pollEvent(zdarzenie))
        {
            
            switch (zdarzenie.type)
            {
            case sf::Event::Closed:
                okno.close();
                break;
            }
            switch (zdarzenie.key.code)
            {
            case sf::Mouse::Button::Left:
                break;
            case sf::Keyboard::Key::Space:
                pocisk* p = new pocisk;
                pociski.push_back(p);
                break;
                /*case sf::Keyboard::Key::Escape:
                    okno.close();
                    break;
                */
            }
            
            
                //pêtla gry
               /* while (gra.windowisopen())
                {
                    gra.update();

                    gra.render();
                    
          
                }*/
            
        }
        okno.clear(sf::Color(0,0,0));
        statek.animuj(okno, zdarzenie, dt);
        //m.animuj(okno);
        //b.animu(okno);
        
        for (auto it = pociski.begin(); it != pociski.end(); ++it)
        {
            (*it)->animu(okno,dt);
        }

        /*for (auto it = meteory.begin(); it != meteory.end(); ++it)
        {
            (*it)->animuj(okno);
        }*/
        okno.display();

    }

    return 5;
}
#include <SFML/Graphics.hpp>

int main() {
	// создаём объект Окно
    sf::RenderWindow window(sf::VideoMode(1600, 960), "Green Ball!");
    
    // создаём объект шарик
    sf::CircleShape shape(200.f, 6);
    
    // метод - заливаем шарик краской
    shape.setFillColor(sf::Color::Blue);
    
    // задаём цвет внешней линии
    shape.setOutlineColor(sf::Color::Red);
    
    // задаём толщину внешней линии
    shape.setOutlineThickness(10.0);

	// меняем местоположение объекта
	// shape.
	
    while (window.isOpen())
    {
		// cоздаём объект событие
        sf::Event event;
        
        
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

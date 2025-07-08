#include <SFML/Graphics.hpp>

int main(){
	// Naggigibo ako igdi ning window
	// Ginamit ko ang sf::RenderWindow para magluwas ang idadraw na shape or sprite
	sf::RenderWindow window(sf::VideoMode({400,200}), "Window");
	// Naggibo ako ning shape na ang size ay 50px
	sf::RectangleShape shape(sf::Vector2f(100, 50));
	// Tig set ko si color kang circle sa green hex code
	shape.setFillColor(sf::Color(100, 250, 50));
	// Nagkaag akong position kang shape ang syntax niya ay entity.setPosition(x, y)
	shape.setPosition(150, 70);
	shape.move(10, 10);
	
	// Ikakaag sa loop si window para haloy siya na na ka open hanggang i-close si window
	while(window.isOpen()){
		// Naggibo ako ning event para i-check kung ano mga nangyayari sa laog kang window
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed)
					window.close();
		}
		window.clear(sf::Color::White);
		window.draw(shape);
		window.display();
	}
	return 0;
}

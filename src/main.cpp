#include "F3/F3.hpp"
#include <SFML/Window.hpp>

int main() {
	
	sf::Window window(sf::VideoMode(800, 600), "F3 engine", sf::Style::Default);
	F3::LoadFunctions();
	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			default: break;
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		
		window.display();
	}
	
	return 0;
}

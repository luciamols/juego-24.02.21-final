#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#define Max_main_menu 3

class Menu
{
	public:
		Menu();
		void Draw(sf::RenderWindow &window);
		void MoveUp();
		void MoveDown();
		int MainMenuPressed(){return MainMenuSelected;}

	private:
		int MainMenuSelected;
		sf::Font font;
		sf::Text mainMenu[Max_main_menu];
		//sf::Sprite image;
		sf::Texture tex;

};

#endif // MENU_H

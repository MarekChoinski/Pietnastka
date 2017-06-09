#ifndef MAIN_HPP_INCLUDED
#define MAIN_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

#include "graphics.hpp"
#include "game.hpp"

#define scramble_button_hovered (sf::Mouse::getPosition(window).x>btn_scramble.getGlobalBounds().left&&sf::Mouse::getPosition(window).x<btn_scramble.getGlobalBounds().left+btn_scramble.getGlobalBounds().width&&sf::Mouse::getPosition(window).y>btn_scramble.getGlobalBounds().top&&sf::Mouse::getPosition(window).y<btn_scramble.getGlobalBounds().top+btn_scramble.getGlobalBounds().height)
#define solve_button_hovered (sf::Mouse::getPosition(window).x>btn_solve.getGlobalBounds().left&&sf::Mouse::getPosition(window).x<btn_solve.getGlobalBounds().left+btn_solve.getGlobalBounds().width&&sf::Mouse::getPosition(window).y>btn_solve.getGlobalBounds().top&&sf::Mouse::getPosition(window).y<btn_solve.getGlobalBounds().top+btn_solve.getGlobalBounds().height)

#endif // MAIN_H_INCLUDED

#include "main.h"

int main()
{


    Game game;
    set_position_of_gui();


    while (window.isOpen())
    {



        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();




            if(scramble_button_hovered)
                btn_scramble.setFillColor(Dark_Blue_Grey_Hover);

            else
                btn_scramble.setFillColor(Dark_Blue_Grey);


            if(solve_button_hovered)
                btn_solve.setFillColor(Dark_Blue_Grey_Hover);

            else
                btn_solve.setFillColor(Dark_Blue_Grey);




            if (event.type == sf::Event::MouseButtonReleased)
                {
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        if(scramble_button_hovered) game.scramble();

                        else if(solve_button_hovered) game.solve();
                    }
                }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                game.move_tile(Game::up);
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                game.move_tile(Game::down);
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                game.move_tile(Game::left);
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                game.move_tile(Game::right);
            }


        }


        window.clear();




        set_position_of_tiles(game.state_of_tiles);
        draw_gui();



        window.display();
    }

    return 0;
}

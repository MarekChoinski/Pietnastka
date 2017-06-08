#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "puzzle15.h"

sf::Color Blue_Grey = sf::Color(38,50,56);
sf::Color Dark_Blue_Grey = sf::Color(33,42,47);
sf::Color Dark_Blue_Grey_Hover = sf::Color(27,34,38);

sf::RenderWindow window(sf::VideoMode(440,540), "15 Puzzle",sf::Style::Close);
sf::RectangleShape board(sf::Vector2f(440,540));

sf::RectangleShape btn_scramble(sf::Vector2f(180,70));
sf::RectangleShape btn_solve(sf::Vector2f(180,70));

sf::Image im_texture, im_void_tile;

sf::Texture texture, texture_void_tile;
sf::Sprite tile[4][4];




unsigned short int normal_state[4][4]=
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,0}
        };

void set_position_of_tiles(short unsigned int state[4][4]);

sf::Font font;
sf::Text text_scramble, text_solve;


void made_texture_properly()
{
im_texture.loadFromFile("board.png");
im_void_tile.create(80, 80, Dark_Blue_Grey);
texture_void_tile.loadFromImage(im_void_tile);

texture.loadFromImage(im_texture);

}


void set_position_of_gui()
{

//GUI
board.setFillColor(Blue_Grey);
board.setPosition(0,0);

btn_scramble.setFillColor(Dark_Blue_Grey);
btn_scramble.setPosition(30,30);

btn_solve.setFillColor(Dark_Blue_Grey);
btn_solve.setPosition(230,30);

set_position_of_tiles(normal_state);


//TILES
    made_texture_properly();

    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    tile[i][j].setTexture(texture);

    tile[3][3].setTexture(texture_void_tile);

    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    tile[i][j].setTextureRect(sf::IntRect(i*80, j*80, 80, 80));

    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    tile[i][j].setPosition(i*100+30,j*100+130);


//TEXT
font.loadFromFile("roboto.ttf");
text_scramble.setFont(font);
text_scramble.setString("Scramble");
text_scramble.setCharacterSize(30);
text_scramble.setPosition(60,44);

text_solve.setFont(font);
text_solve.setString("Solve");
text_solve.setCharacterSize(30);
text_solve.setPosition(283,44);


}

void draw_gui()
{

    window.draw(board);
    window.draw(btn_scramble);
    window.draw(btn_solve);

    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
        window.draw(tile[i][j]);

    window.draw(text_scramble);
    window.draw(text_solve);

}

void set_position_of_tiles(short unsigned int state[4][4])
{

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            puzzle15::position normal_position = puzzle15::search_in(normal_state, state[i][j]);
            tile[normal_position.x][normal_position.y].setPosition(i*100+30,j*100+130);
        }

    }

}




#endif // GRAPHICS_H

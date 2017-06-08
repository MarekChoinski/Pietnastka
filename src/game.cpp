#include "game.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include "puzzle15.h"





Game::Game()
{
    solve();
}

void Game::solve(void)
{
    int value=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++, value++)
        state_of_tiles[i][j]=value;
    }
    state_of_tiles[3][3]=0;
}

void Game::scramble(void)
{
  std::srand ( unsigned ( std::time(0) ) );
  std::vector<int> random_values;

  // set some values:
  for (int i=0; i<16; ++i) random_values.push_back(i);

  std::random_shuffle ( random_values.begin(), random_values.end() );

  int a=0;
  for(int i=0;i<4;i++)
  for(int j=0;j<4;j++,a++)
  state_of_tiles[i][j]=random_values[a];

  random_values.clear();
}


void Game::move_tile(int direction)
{
    puzzle15::position Positi0n;
    Positi0n = puzzle15::search_in(state_of_tiles, 0);



    if(direction == up)
    {
        if( (Positi0n.y)!=3 )
        {
            std::swap(state_of_tiles[Positi0n.x][Positi0n.y], state_of_tiles[Positi0n.x][Positi0n.y+1]);
        }
    }

    if(direction == down)
    {
        if( (Positi0n.y)!=0 )
        {
            std::swap(state_of_tiles[Positi0n.x][Positi0n.y], state_of_tiles[Positi0n.x][Positi0n.y-1]);
        }
    }

    if(direction == left)
    {
        if( (Positi0n.x)!=3 )
        {
            std::swap(state_of_tiles[Positi0n.x][Positi0n.y], state_of_tiles[Positi0n.x+1][Positi0n.y]);
        }
    }

    if(direction == right)
    {
        if( (Positi0n.x)!=0 )
        {
            std::swap(state_of_tiles[Positi0n.x][Positi0n.y], state_of_tiles[Positi0n.x-1][Positi0n.y]);
        }
    }


}






#include "puzzle15.hpp"

namespace puzzle15
{

    unsigned short int normal_state[4][4]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,0}
    };


    position search_in(short unsigned int state[4][4], const int number)
    {
        position Pos;
        int i=0,j=0;

        for(;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(state[i][j] == number)
                {
                    Pos.x=i;
                    Pos.y=j;

                    return Pos;
                }
            }
        }
    }
}

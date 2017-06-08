#ifndef PUZZLE15_H
#define PUZZLE15_H

namespace puzzle15
{
        struct position
        {
            int x,y;
        };

        position search_in(short unsigned int state[4][4], const int number);
}


#endif

#ifndef PUZZLE15_HPP
#define PUZZLE15_HPP

namespace puzzle15
{
        struct position
        {
            int x,y;
        };

        position search_in(short unsigned int state[4][4], const int number);
}

#endif

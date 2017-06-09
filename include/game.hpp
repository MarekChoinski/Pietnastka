#ifndef GAME_HPP
#define GAME_HPP

class Game
{
    public:
        Game();

        unsigned short int state_of_tiles[4][4];

        void solve(void);
        void scramble(void);

        enum
        {
            up=1,
            down=2,
            left=3,
            right=4
        };

        void move_tile(int direction);
};

#endif // GAME_H

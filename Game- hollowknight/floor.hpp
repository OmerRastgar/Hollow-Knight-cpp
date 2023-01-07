#include <iostream> 
#include <SDL.h>

using namespace std;

/**
 * \brief keeps the player on the plateform. colission is checked with player when gravity is enabled;
 * */


class Floor{
    int shift,shifty;
    SDL_Rect mover;
    public:
    Floor(int x ,int y ,int w ,int h, int shift,int shifty);
    void update(int,int);
    SDL_Rect* return_rect(); 
};
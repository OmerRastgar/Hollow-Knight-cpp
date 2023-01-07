#pragma once
#include <iostream>
#include "sdl.h"

using namespace std;

/**
 * \brief enetity class helps use to keep the common functions within enemy and player
 * this is an example of inheritance 
 * 
 * */

class Entity{
    protected:
    SDL_Rect scr,mover;
    public:
    SDL_Rect* return_rect(int val);
    void attack();
    void death();
};
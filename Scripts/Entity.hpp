#pragma once
#include <iostream>
#include "sdl.h"

using namespace std;


class Entity{
    protected:
    SDL_Rect scr,mover;
    int health;
    public:
    SDL_Rect* return_rect(int val);
    void attack();
    void damage();
    void death();
};
#pragma once
#include <iostream>
#include <sdl.h>

using namespace std;

class Static_obj{
    SDL_Rect scr,mover;
    string name;
    int damage;
    public:
    Static_obj(string n);

};
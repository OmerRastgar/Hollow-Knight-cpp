#pragma once
#include<iostream>
#include<SDL.h>
#include "string.h"
using namespace std;
#include <List>
#include "Button.hpp"

class menu{
    private:
    string type;
    list <Button> B;
    protected:
    // SDL_Renderer *gRenderer;
    // SDL_Texture *assets;
    SDL_Rect srcRect, moverRect;
    public:
    void show(SDL_Renderer*, SDL_Texture* assets);
    menu(string type1, SDL_Rect a,SDL_Rect b);

};
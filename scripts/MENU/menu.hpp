
#include<iostream>
#include<SDL.h>
#include "string.h"
using namespace std;

class menu{
    private:
    string type;
    protected:
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    SDL_Rect srcRect, moverRect;
    public:
    void show(SDL_Renderer*, SDL_Texture* assets);

};
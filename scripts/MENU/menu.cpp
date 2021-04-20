#include "menu.hpp"

menu:: menu(string type1, SDL_Rect a,SDL_Rect b){
     srcRect =a;
    moverRect =b;
    type= type1;

}

void menu::show(SDL_Renderer* gRenderer, SDL_Texture* assets){
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);

}
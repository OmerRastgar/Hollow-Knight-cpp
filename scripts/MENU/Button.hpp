#include<iostream>
#include<SDL.h>
#include "string.h"

using namespace std;

class Button(){
    protected:
    int x_loc1;
    int x_loc2;
    int y_loc1 , y_loc2;
    string state = "off";
    SDL_Rect srcRect, moverRect;
    public:
    virtual bool Switch(x_loc1,x_loc2,y_loc1,y_loc2,state);
};


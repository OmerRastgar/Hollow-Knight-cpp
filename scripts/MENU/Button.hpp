#include<iostream>
#include<SDL.h>
#include "string.h"

using namespace std;

class Button(){
    protected:
    string state = "off";
    SDL_Rect srcRect, moverRect;
    public:
    virtual bool Switch(int,int,int,int,bool);  
};


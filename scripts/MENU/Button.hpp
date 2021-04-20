#pragma once
#include<iostream>
#include<SDL.h>
#include "string.h"

using namespace std;



class Button{
    protected:
    int x_loc1, x_loc2, y_loc1, y_loc2; 
    int X ,Y; //cursor's cordinates
    string state = "off";
    SDL_Rect srcRect, moverRect;
    public:
    void getCordinates(int a, int b);
    void range(int x1, int x2, int y1, int y2);
    // Button(int,int,int,int,int,int);
    virtual bool Switch(int,int,int,int);  
};


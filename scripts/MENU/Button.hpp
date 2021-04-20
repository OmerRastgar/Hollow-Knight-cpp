#include<iostream>
#include<SDL.h>
#include "string.h"

using namespace std;

// making a structure to store the cursor's cordinates
struct Cursor{
    int X ,Y;
    Cursor (int a, int b) : X(a) , Y(b){}
};

class Button(){
    protected:
    int x_loc1, x_loc2, y_loc1, y_loc2; 
    string state = "off";
    SDL_Rect srcRect, moverRect;
    public:
    Cursor c1;
    virtual bool Switch(int,int,int,int,bool);  
};


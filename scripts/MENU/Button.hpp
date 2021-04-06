#include<iostream>
#include<SDL.h>


using namespace std;

class Button(){
    protected:
    int x_loc1;
    int x_loc2;
    int y_loc1 , y_loc2;
    int check;
    SDL_Rect  moverRect;
    public:
    virtual int check_click();
    virtual void move(check);
};


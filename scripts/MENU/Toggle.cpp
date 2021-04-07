#include "Toggle.hpp"

Toggle::Toggle(int y ,int z,int x, int a){
    y_loc1 = y;
    y_loc2 = z;
    x_loc1 = x;
    x_loc2 = a;
}


bool Toggle::Switch(x_loc1,x_loc2,y_loc1,y_loc2,state){
    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            if (state == "off"){
                state  = "on";
                srcRect.x++; // changing the position of the toggle (displaying different image for toggle)
                // moverRect.x ++;
            }
            if (state == "on"){
                state = "off";
            }
        }
        return true;
    }
    return false;
}



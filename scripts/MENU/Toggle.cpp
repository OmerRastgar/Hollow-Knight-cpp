#include "Toggle.hpp"

Toggle::Toggle(int y ,int z,int x, int a){
    y_loc1 = y;
    y_loc2 = z;
    x_loc1 = x;
    x_loc2 = a;
}


bool Toggle::Switch(int x_loc1,int x_loc2,int y_loc1,int y_loc2,bool click){
    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            
            if (state == "off"){
                state  = "on";
                srcRect.x++; // changing the position of the toggle (displaying different image for toggle)
               
                return true // only return true if u have on the button
            }
            if (state == "on"){
                srcRect.x--; // changing the position of the toggle (displaying different image for toggle)
                state = "off";
                return false 
            }
        }
        
    }
    return false;
}



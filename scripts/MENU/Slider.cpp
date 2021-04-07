#include "Slider.hpp"
#include "Toggle.hpp"

bool Slider::Switch(x_loc1,x_loc2,y_loc1,y_loc2,state){

    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            if (state == "off"){
                state  = "on";
                moverRect.x ++;
            }
            if (state == "on"){
                state = "off";
            }
        
        return true;
        }

    }
    return false;
}



#include "Slider.hpp"
#include "Toggle.hpp"

bool Slider::Switch(int x_loc1,int x_loc2,int y_loc1,int y_loc2, bool click){

    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            click =  true;
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
    click = false;
    return false;
}



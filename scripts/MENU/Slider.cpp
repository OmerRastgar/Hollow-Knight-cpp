#include "Slider.hpp"
#include "Toggle.hpp"

bool Slider::Switch(int x_loc1,int x_loc2,int y_loc1,int y_loc2, bool click){ 

    /*
    1) int x_loc1,int x_loc2,int y_loc1,int y_loc2  are defined in the class 
    2) u will recieve x and y coordinates in Switch(x,y,bool click) thses will be cursor coordinates
    3) make required changes in ur function since mover rect will be checking with the cursor coordinates
    4) this logic is fine for toggle but for slider u will do somthing like this----V
    if (x_loc1< x < x_loc2 and y_loc1< y < y_loc2 ){
        moverRect.x =  x 
        level=  (mover.x-x_loc1)/(x_loc2-x_loc1)  this tells us where the slider is ie at the 100% mark or 50 % mark
    }

    5) make a contructor to intialize int x_loc1,int x_loc2,int y_loc1,int y_loc2 like the one in toggle 
    */


    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            click =  true;
            if (state == "off"){

                
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



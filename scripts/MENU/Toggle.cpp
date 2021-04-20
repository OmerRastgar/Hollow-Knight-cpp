#include "Toggle.hpp"


// Toggle::Toggle(int x1 ,int x2,int y1, int y2,int a, int b){
//     x_loc1 = x1;
//     x_loc2 = x2;
//     y_loc1 = y1;
//     y_loc2 = y2;
//     X = a;
//     Y = b;
// }


bool Toggle::Switch(int x_loc1,int x_loc2,int y_loc1,int y_loc2){
    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            
            if (state == "off"){
                state  = "on";
                srcRect.x++; // changing the position of the toggle (displaying different image for toggle)
               
                return true; // only return true if u have on the button
            }
            if (state == "on"){
                srcRect.x--; // changing the position of the toggle (displaying different image for toggle)
                state = "off";
                return false ;
            }
        }
        
    }
    return false;
}



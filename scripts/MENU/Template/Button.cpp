#include "Button.hpp"

Button::Button(int x ,int y,int w, int h,string n){
    moverRect.x = x;
    moverRect.y = y;
    moverRect.w = w;
    moverRect.h = h;
    name = n;
}

void Button::getCordinates(int a, int b){
    X = a;
    Y = b;
}

// void Button::range(int x1, int x2, int y1, int y2){
//     x_loc1 = x1;
//     x_loc2 = x2;
//     y_loc1 = y1;
//     y_loc2 = y2;
// }
<<<<<<< HEAD:scripts/MENU/Button.cpp

=======
void Button::getCordinates(int a, int b){
    X = a;
    Y = b;
}
void Button::range(int x1, int x2, int y1, int y2){
    x_loc1 = x1;
    x_loc2 = x2;
    y_loc1 = y1;
    y_loc2 = y2;
}
>>>>>>> main:scripts/MENU/Template/Button.cpp
bool Button::Switch(int x_loc1,int x_loc2,int y_loc1,int y_loc2){

    // this function will not work since it is virtual 
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
                return false; 
            }
        }
        
    }
    return false;

    // commenting out the previous implmentation:
    // return true; /// u cant just return true u need to switch it 


}


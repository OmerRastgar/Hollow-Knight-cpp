#include "button.hpp"


/**
 * this class checks if the cursor is selecting the button then returns the 
 * name of the button  
 *  */

string Button::check(int x,int y){
if (moverRect.x<= x and moverRect.w>= x){
    if (moverRect.y<= y and moverRect.h>= y){
        return name;
    }
}
return "not";

}
Button::Button(int x,int y,int w,int h, string name){ // constructor 
    moverRect.x=x;
    moverRect.y=y;
    moverRect.h=h;
    moverRect.w=w;
    this ->name= name ;
}
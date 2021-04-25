#include "button.hpp"


string Button::check(int x,int y){
    /**
     * checking if the Cursor points in the reigon for a particular Button on the Screen.
     */
if (moverRect.x<= x and moverRect.w>= x){
    if (moverRect.y<= y and moverRect.h>= y){
        return name;
    }
}
return "not";

}
/**
 * initializing attributes in the constructor
 */

Button::Button(int x,int y,int w,int h, string name){
    moverRect.x=x;
    moverRect.y=y;
    moverRect.h=h;
    moverRect.w=w;
    this ->name= name ;
} 
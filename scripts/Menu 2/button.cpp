#include "button.hpp"


string Button::check(int x,int y){
if (moverRect.x<= x and moverRect.w>= x){
    if (moverRect.y<= y and moverRect.h>= y){
        return name;
    }
}
return "not";

}
Button::Button(int x,int y,int w,int h, string name){
    moverRect.x=x;
    moverRect.y=y;
    moverRect.h=h;
    moverRect.w=w;
    this ->name= name ;
}
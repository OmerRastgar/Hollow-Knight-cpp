#include "floor.hpp"

Floor::Floor(int x ,int y ,int w ,int h, int shift,int shifty){
    mover.x=x;
    mover.y=y;
    mover.w=w;
    mover.h=h;
    this ->shift=shift; 
    this ->shifty = shifty;
}
void Floor::update(int x,int y){
    
    mover.x = shift-x;
    mover.y = shifty-y;
   
}
SDL_Rect* Floor::return_rect(){
    return &mover;
} 
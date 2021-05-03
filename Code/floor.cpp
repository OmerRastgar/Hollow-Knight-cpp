#include "floor.hpp"

/**
 * A plateform for the player to stand, these are invisible and sync with the background to stay 
 * at their positions
 **/

Floor::Floor(int x ,int y ,int w ,int h, int shift,int shifty){ // shifted values contain the coordinates for the 
    mover.x=x;                                                  // background image where they are placed
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
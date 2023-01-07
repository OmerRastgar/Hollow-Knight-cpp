#include <iostream>
#include <SDL.h>


/**
 * since in collision checking we require the middle coordinates instead of the x and y of mover
*/
struct Location{
   int Middle_x,MiddleY; 
    public:
    int get_centerX(SDL_Rect* mover){
        return (mover.x+(mover.w/2))
    }
    void get_centerY(SDL_Rect* mover){
        return (mover.y-(mover.h/2))
    }

};
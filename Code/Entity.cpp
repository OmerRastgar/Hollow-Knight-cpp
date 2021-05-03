#include "Entity.hpp"

void Entity::attack(){

}


SDL_Rect* Entity::return_rect(int val){
    if (val == 1)
        return &mover;
    else if(val == 2)
        return &scr;
    
}


#include "health.hpp"

void Health::health_decrease(){
    if (counter == 0){
        mover3= {0,0,0,0};
    }
    if (counter == 1){
        mover2= {0,0,0,0};
    }
    if (counter == 2){
        mover1= {0,0,0,0};

    }
    counter++;
} 
SDL_Rect* Health::return_rect(int x){
    if (x == 1){
        return &mover1;
    }
    if (x == 2){
        return &mover2;
    }
    if (x == 3){
        return &mover3;
    }
}
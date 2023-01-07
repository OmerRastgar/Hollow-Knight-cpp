#include <iostream> 
#include <SDL.h>

using namespace std;

/**
 * \brief keeps track of health
 * */


class Health{
    SDL_Rect mover1={10,10,30,40};
    SDL_Rect mover2={40,10,30,40};
    SDL_Rect mover3={70,10,30,40};
    public:
    int counter =0;
    void health_decrease(); 
    SDL_Rect* return_rect(int);
    
};
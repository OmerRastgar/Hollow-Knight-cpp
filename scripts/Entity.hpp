#pragma once
#include <iostream>
#include <sdl.h>
#include <string>

class Player{
    SDL_Rect scr,mover;
    int health , speed,jump1,speed1;
    
    public:
    bool gravity,jump_bool;
    Player();
    void move(std::string direction);
    bool gravity_check();
    void jump();
    SDL_Rect* return_rect(int val);
    void update_y(int val);
    

}; 

class Wall{
    SDL_Rect mover= {50,50,60,60};
    SDL_Rect scr= {45,1,60,70};
    int temp;
    public:
    Wall(int x, int y);
    SDL_Rect* return_rect(int val);
    void move();

};

class object{
    int speed;
    SDL_Rect scr,mover;
    public:
    bool gravity1 ;
    object(int x , int y);
    void update_x(int val);
    void gravity();
    SDL_Rect* return_rect(int val);
    void update_y(int val);

};
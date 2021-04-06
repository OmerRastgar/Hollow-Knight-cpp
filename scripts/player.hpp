#include <sdl.h>
#include <string>
#include <iostream>

class player{
 bool attack,jump;
 std::string dir;
 int var, var1;
 int test;   
 SDL_Rect scr,mover;
 public:
 player();
 void move(std::string direction);
 SDL_Rect* return_rect(int val);
 void check();
};
#pragma once 
#include <sdl.h>
#include <string>
#include "Entity.hpp"
#include <iostream>

class player:public Entity{
 bool attack,jump;
 std::string dir;
 int var, var1;
 int test;   
 
 public:
 player();
 void move(std::string direction);
 void check();   // check if attack animation is enabled
};
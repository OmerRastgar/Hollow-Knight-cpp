#pragma once
#include "Button.hpp"
#include<SDL.h>

class Toggle : public Button{
    // int x_loc1, x_loc2, y_loc1, y_loc2 ;
    public:
    // Toggle(int,int,int,int,int,int);
    bool Switch(int,int,int,int);

};
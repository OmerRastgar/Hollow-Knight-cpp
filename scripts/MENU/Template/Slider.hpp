#pragma once
#include "Button.hpp"
#include<SDL.h>

class Slider : public Button{
    // int x_loc1, x_loc2, y_loc1, y_loc2 ;
    int level; // shows the percentage move of the slider  
    public:
    // Slider(int,int,int,int,int,int);
    // bool Switch(int,int,int,int,bool); previous implementation for Switch function
    bool Slide (int,int,bool);


};
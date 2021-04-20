#include "Button.hpp"
#include "Toggle.hpp"
#include<SDL.h>

class Slider : public Button{
    int x_loc1,int x_loc2,int y_loc1,int y_loc2 ;
    int level; // shows the percentage move of the slider  
    public:
    Slider(int,int,int,int);
    // bool Switch(int,int,int,int,bool); previous implementation for Switch function
    bool Slide (int,int,bool);


};
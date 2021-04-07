#include "Button.hpp"
#include<SDL.h>

class Toggle : public Button{
    public:
    Toggle(int,int,int,int);
    bool Switch(x_loc1,x_loc2,y_loc1,y_loc2,state);

};
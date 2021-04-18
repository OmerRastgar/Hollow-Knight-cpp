#include "Button.hpp"
#include<SDL.h>

class Toggle : public Button{
    int x_loc1,int x_loc2,int y_loc1,int y_loc2 ;
    public:
    Toggle(int,int,int,int);
    bool Switch(int,int,int,int,bool);

};
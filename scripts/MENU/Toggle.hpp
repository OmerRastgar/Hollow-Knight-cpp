#include "Button.hpp"
#include<SDL.h>

class Toggle : public Button{
    public:
    Toggle(int,int,int,int);
    bool Switch(int,int,int,int,bool);

};
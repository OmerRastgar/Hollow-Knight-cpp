#include "Button.hpp"
#include<SDL.h>

class Toggle : public Button{
    public:
    Toggle(int,int,int,int);
    int check_click();


};
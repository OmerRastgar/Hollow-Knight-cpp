#include <iostream>
#include <SDL.h>
#include "Button.hpp"
#include "Toggle.hpp"
#include "Slider.hpp"

using namesapce std;

int main(){
    int CHECK = check_click();
    move(CHECK);
    return 0;

}
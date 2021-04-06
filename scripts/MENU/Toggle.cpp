#include "Toggle.hpp"

Toggle::Toggle(int y ,int z,int x, int a){
    y_loc1 = y;
    y_loc2 = z;
    x_loc1 = x;
    x_loc2 = a;
}


Toggle::check_click(){
    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            return 1;
        }
        
    }
    return 0;


}
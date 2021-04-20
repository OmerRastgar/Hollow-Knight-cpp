#include "Button.hpp"


bool Button::Switch(x_loc1,x_loc2,y_loc1,y_loc2){
<<<<<<< Updated upstream
    // this function will not work since it is virtual 
    return true;
=======
    if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
        if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
            
            if (state == "off"){
                state  = "on";
                srcRect.x++; // changing the position of the toggle (displaying different image for toggle)
               
                return true // only return true if u have on the button
            }
            if (state == "on"){
                srcRect.x--; // changing the position of the toggle (displaying different image for toggle)
                state = "off";
                return false 
            }
        }
        
    }
    return false;

    // commenting out the previous implmentation:
    // return true; /// u cant just return true u need to switch it 
>>>>>>> Stashed changes

}


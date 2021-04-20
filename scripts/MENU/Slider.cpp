#include "Slider.hpp"

Slider::Slider(int x1 ,int x2,int y1, int y2){
    x_loc1 = x1;
    x_loc2 = x2;
    y_loc1 = y1;
    y_loc2 = y2;
}
// ------------------commenting out the previous implentation of teh Switch function: (no longer in use)--------------------
// bool Slider::Switch(int x_loc1,int x_loc2,int y_loc1,int y_loc2, bool click){ 

//     if (y_loc1<=moverRect.y && moverRect.y<=y_loc2){
//         if (x_loc1<=moverRect.x && moverRect.x<=x_loc2){
//             click =  true;
//             if (state == "off"){

                
//                 moverRect.x ++;
//             }
//             if (state == "on"){
//                 state = "off";
//             }
        
//         return true;
//         }

//     }
//     click = false;
//     return false;
// }
//------------------------------------------------------------------------------------------------------------------//


/*
    1) int x_loc1,int x_loc2,int y_loc1,int y_loc2  are defined in the class  -> (defined these in the Button parent class)
    2) u will recieve x and y coordinates in Switch(x,y,bool click) thses will be cursor coordinates -> made a struct for Cursor cordinates in the parent class.
    3) make required changes in ur function since mover rect will be checking with the cursor coordinates
    4) this logic is fine for toggle but for slider u will do somthing like this----V
    if (x_loc1< x < x_loc2 and y_loc1< y < y_loc2 ){
        moverRect.x =  x 
        level=  (mover.x-x_loc1)/(x_loc2-x_loc1)  this tells us where the slider is ie at the 100% mark or 50 % mark
    }

    5) make a contructor to intialize int x_loc1,int x_loc2,int y_loc1,int y_loc2 like the one in toggle  (DONE)
    */


bool Slider::Slide(int Cursor.X, int Cursor.Y ,bool click){
    if (x_loc1< Cursor.X < x_loc2 and y_loc1< Cursor.Y < y_loc2 ){
        moverRect.x =  Cursor.X; 
        level=  (mover.x-x_loc1)/(x_loc2-x_loc1)  //this tells us where the slider is ie at the 100% mark or 50 % mark
        srcRect.x+=level; // moving the Slider to the required position
    }
}


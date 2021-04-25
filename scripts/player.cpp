#include "player.hpp"


player::player(){
    mover= {50,50,80,80};
    int test=0;
   scr= {0,0,80,80};
   attack= false;
   var= 20;
   var1=0;
  
}

void player::move(std::string direction){
    if (direction == "Jump"){
        jump= true;
    }

    else if (direction == "East"){
        dir = direction;
        
        mover.x+= 10;
        if (scr.x> 600)
            scr.x= 0;
        if (!attack){
        scr.y= 0;
        scr.x+= 80;
        }
    
    }
    else if (direction == "West"){
        dir = direction;
        mover.x-= 10;
        if (scr.x> 600)
            scr.x= 0;
        if (!attack){
        scr.y= 80;
        scr.x+= 80;
        }
    }
    else if (direction == "attack"){
       attack = true;
       
    }
    
    
}

void player::check(){
    
    if(attack){
        if (dir == "East" ){
            scr.y= 160;
            
        }
        if (dir == "West"){
            scr.y= 240;
            
        }
        
       if (scr.x> 400){
            attack= false;
            if (dir == "East"){
                scr.y= 0;
                scr.x=0;
            }
            else if(dir == "West"){
                scr.y=80;
                scr.x=0;
            }
       }
        scr.x+= 80; 
    }
    if(jump){
        if (dir == "East" ){
            scr.y= 320;
            
        }
        if (dir == "West"){
            scr.y= 400;
            
        }
        
       if (scr.x> 800){
            jump= false;
            if (dir == "East"){
                scr.y= 0;
                scr.x=0;
            }
            else if(dir == "West"){
                scr.y=80;
                scr.x=0;
            }
       }
       if (var1 > 120  or var1< 0){
           var=-var;
           
       }
       
        var1+=var;
       mover.y+=var;
        
        scr.x+= 80; 
    }
}


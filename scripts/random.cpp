#pragma once
/*


Player::Player(){
   mover= {50,50,60,60};
   scr= {45,1,60,70};
   health = 100;
   speed= 2;
   jump_bool=false;
   jump1= 0;
   speed1=20;
   gravity= false; 
}
void Player::update_y(int val){
    mover.y=val;
}
void Player::move(std::string direction){
    if (direction == "Jump"){
        jump_bool=true;
    }

    else if (direction == "East"){
        scr.y= 0;
        mover.x+= speed1;
        if (scr.x> 30)
            scr.x= 0;
        scr.x+= 5;
    
    }
    else if (direction == "West"){
        scr.y= 10;
        mover.x-= speed1;
        if (scr.x> 30)
            scr.x= 0;
        scr.x+= 5;
    }

}
bool Player::gravity_check(){
    if (gravity) {
        //speed+=2;
        mover.y+= speed;
        return true;
    }
    else 
        speed = 2;
        return false;
}
SDL_Rect* Player::return_rect(int val){
    if (val == 1)
        return &mover;
    else if(val == 2)
        return &scr;
    
}
void Player::jump(){
    if (jump1<25 and jump_bool==true){
        jump1+=2;
        mover.y-=jump1;
    }
    else{
        jump_bool=false;
        jump1=1;
    }
}

Wall::Wall(int x, int y){
   mover={x,y,250,40};
    scr= {120, 18, 260, 43};
    temp = y;
}

SDL_Rect* Wall::return_rect(int val){
    if (val == 1)
        return &mover;
    else if(val == 2)
        return &scr;
    
}

void Wall::move(){
    if (mover.y > -10)
        mover.y--;
    else
        mover.y= 620;
}

void object::update_x(int val){
    mover.x=val;
}

object::object(int x, int y){
    mover= {90,50,55,57};
   scr= {20,100,70,57};
   speed= 2;
}  

void object::gravity(){
    if (gravity1) {
        //speed+=1;
        mover.y+= speed;
      
    }
    else 
        speed = 2;
       
}
SDL_Rect* object::return_rect(int val){
    if (val == 1)
        return &mover;
    else if(val == 2)
        return &scr;
    
}
void object::update_y(int val){
    mover.y=val;
}
*/
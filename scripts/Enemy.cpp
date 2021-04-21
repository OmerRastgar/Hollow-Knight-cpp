#include "Enemy.hpp"

Enemy::Enemy(){
    mover ={20,20,80,80};
    scr = {0,260,120,130};
    speed= 2;
}

void Enemy::patrol(){
    
    if (count > 150){
        speed = -speed;
    }
    if (count < 0 ){
        speed = -speed;
    }
    count += speed;
    mover.x+=speed;
    
    if (speed > 0){
        scr.y= 390;
    }
    if (speed < 0){
        scr.y= 260;
    }
    scr.x += 120;
    if (scr.x>350){
        scr.x=0;
    }
}
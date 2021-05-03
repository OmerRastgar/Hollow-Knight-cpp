#include "Enemy.hpp"

Enemy::Enemy(){
    mover ={0,300,80,80};
    scr = {0,0,120,130};
    speed= 2;
    offset=0;
}

void Enemy::patrol(int x,int y){
    if (count > 150){
        speed = -speed;
    }
    if (count < 0 ){
        speed = -speed;
    }
    count += speed;
    mover.x= 4664 +count-x;
    mover.y= 897 -y;

    cout << speed<<endl;
    if (speed > 0){
        scr.y= 130;
    }   
    if (speed < 0){
        scr.y= 0;
    }
    scr.x += 120;
    if (scr.x>350){
        scr.x=0;
    }


}
bool Enemy::attack(int player_x,int player_y, int mover_x, int mover_y){
    int position =  4664-mover_x;
    cout << player_x+40 <<" "<< position+100  <<endl;
    mover.y= 897 -mover_y;
    
    if (player_x < position+100 and player_x+40>position-100 )
    {
        cout<< "true";
        if (player_x+40 < position+100){
            mover.x= 4664 -mover_x;
            mover.x+= 2;
            scr.x+= 120;
            scr.y=390;
            if (scr.x>369){
                scr.x=0;
            }
        }
        else if (player_x+40 > position-100){
            mover.x= 4664 -mover_x;
             mover.x-= 2;
            scr.x+= 120;
            scr.y=260;
            if (scr.x>369){
                scr.x=0;
            }
        }
        return true;
    }
    return false;
}
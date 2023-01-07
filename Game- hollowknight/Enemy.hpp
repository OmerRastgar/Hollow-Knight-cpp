#pragma once 

#include<iostream>
#include "Entity.hpp"

using namespace std;


/**
 * \brief this was supose to be a parent class that contian three different enemies.
 * we would use polymorphism to organise each class so that once they were in a list they can be called within 
 * the same list.
 * */
class Enemy: public Entity{
    int count=0;
    int speed; 
 
    public:
    int offset;
    Enemy();
    void patrol(int,int);
    bool attack(int ,int,int, int );
    void die();

};
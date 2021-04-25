#pragma once 

#include<iostream>
#include "Entity.hpp"

using namespace std;

class Enemy: public Entity{
    int count=0;
    int speed; 
    public:
    Enemy();
    void patrol();
};
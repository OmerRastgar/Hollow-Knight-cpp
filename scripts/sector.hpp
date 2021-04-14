#pragma once
#include<iostream>
#include <list>
#include "Entity.hpp"
#include "static_obj.hpp"
#include "background.hpp"

using namespace std;

class Sector{
    list <Entity> E_list;
    list <Static_obj> obj_list;
    list <Background> B_list; 
    public:
    bool check_collision();



};
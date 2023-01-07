#pragma once
#include "menu.hpp"

/**
 * check if any button area corresponed to the area where the cursor is pressed  
 * 
 * */

string Menu::check_buttons(int x,int y){
    string check;
    for (auto i: lst){
        check= i->check(x,y);
        if (!(check == "not")){
            return check;
        }
    }
    return "False";
}
void Menu::add(Button* b1){
    lst.push_back(b1);
}

Menu::~Menu(){
    for (auto i: lst){
        delete i;
    }
}
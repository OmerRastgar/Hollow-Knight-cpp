#pragma once
#include "menu.hpp"

string Menu::check_buttons(int x,int y){
    string check;
    for (auto i: lst){
        /** calling the check function for the Button from the pointer.
         */ 
        check= i->check(x,y);
        if (!(check == "not")){
            return check;
        }
    }
    return "False";
}
void Menu::add(Button* b1){
    /**
     * populating the list with pointers to Button objects.
    lst.push_back(b1);
}
#pragma once
#include "menu.hpp"

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
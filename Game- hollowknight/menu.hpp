#include "button.hpp"
#include <list>


/**
 * \brief manages all the buttons 
 * 
 * */

class Menu{
    list <Button*> lst;
public:
string check_buttons(int,int);
void add(Button*);
~Menu();

};
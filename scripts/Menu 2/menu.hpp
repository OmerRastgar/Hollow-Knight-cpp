#include "button.hpp"
#include <list>

/**
 * /brief This class will be storing the attributes related to the Main Menu and the Pause Menu for the game .
 * lst is a list that will store the pointers to the locations of objects of the Button class.
 * 
 */

class Menu{
    /** Defining the attributes for the Menu class.
     */
    list <Button*> lst;
public:
/** function to check which button is currently pressed as per the Cursor's cordinates.
 * if no Button is currently pressed so it will return a string "false".
 */
string check_buttons(int,int);
/** function to add the pointers to the location of Button objects inside the list
 */
void add(Button*);


};
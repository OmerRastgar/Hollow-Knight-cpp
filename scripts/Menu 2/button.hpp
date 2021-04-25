#pragma once
#include <iostream>
#include <SDL.h>

using namespace std;
/**
 * /brief This class will be storing the attributes related to the buttons that will appear on the Menu for the game.
 * name is the name of a particular Button eg: options or quit game etc.
 * moverRect is the structure that defines a rectangular area of the screen for a particular Button .
 */


class Button{
    /** Defining the attributes for the Button class.
     */
string name;
protected:
SDL_Rect moverRect;
public:
/** function to return the name of a particular button as per the current Cursor cordinates.
 * if the current mouse cordinates don't correspond to a Button so it will return a string "not" that will correspond to this.
 */ 
string check(int,int);
/** This constructor will initialize the attributes.
 * x is the x location of the rectangle's upper left corner which is an int.
 * y is the y location of the rectangle's upper left corner which is an int.
 * w is the width of the rectangle which is an int.
 * h is the height of the rectangle which is an int.
 */ 
Button(int x,int y,int w,int h, string name);
};
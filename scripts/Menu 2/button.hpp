#pragma once
#include <iostream>
#include <SDL.h>

using namespace std;

class Button{
string name;
protected:
SDL_Rect moverRect;
public:
string check(int,int);
Button(int x,int y,int w,int h, string name);
};
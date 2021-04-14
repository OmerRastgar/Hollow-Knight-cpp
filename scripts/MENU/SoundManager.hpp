#include<iostream>
#include<SDL.h>
#include "string.h"
#include <list>
#include"Sound.hpp"
using namespace std;


class SoundManager{
public:
string name;
list <Sound> lst;
virtual void play(string);


};


#pragma once
#include<iostream>
#include<SDL.h>
#include <string>
#include"Sound.hpp"
#include <map>
using namespace std;


class SoundManager{
    protected:
    string name;
    map <std::string, Sound*> LST;  //map which has a key <name, sound >
public:
SoundManager(std::string);
void get_Sound(Sound*,std::string); // function that gets a sound and it save the sound in the map
virtual void play(std::string); //function gets a string name u return a sound 

};

// add function that gets a sound and it save the sound in the list 
// make the list in to a map which has a key <name, sound >
// the other function gets a string name u return a sound 

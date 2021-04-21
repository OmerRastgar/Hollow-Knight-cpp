#pragma once

#include<SDL.h>


#include <string>
using namespace std;

class Sound{

    private:
    std::string name;
    Mix_Music* music = NULL;
    // Mix_Chunk* M;
    public:
    Sound(std::string); 

};


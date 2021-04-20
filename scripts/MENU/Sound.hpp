#pragma once
#include "SoundManager.hpp"

class Sound : public SoundManager{

    private:
    Mix_Music* bgMusic = NULL;
    Mix_Chunk* M;
    public:
    // Sound(Mix_Music*,Mix_Chunk*); // cant figure out what to initialize the attributes with
    void play(string);

};
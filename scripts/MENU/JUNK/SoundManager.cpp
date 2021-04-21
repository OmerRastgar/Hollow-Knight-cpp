#include "SoundManager.hpp"


void SoundManager::get_Sound(Mix_Music sound1, std::string name){
    
    LST[name] = new Sound( name, sound1);
}

void SoundManager::play(std::string name){
    Sound* ptr = LST[name];
    cout<<*ptr;
}
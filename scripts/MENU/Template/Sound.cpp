#include "Sound.hpp"

Sound::Sound(std::string n,Mix_Music* music1 ){
    name = n;
    music =music1;
}

// void Sound::play(std::string name){
//     Sound* ptr = LST[name];
//     cout<<*ptr;
// }
#include "Sound.hpp"

void Sound::play(string name){
    Sound* ptr = LST[name];
    cout<<*ptr;
}
#include "SoundManager.hpp"


void SoundManager::get_Sound(Sound *S, string name){
    Sound* S = new Sound(new Mix_Music(), new Mix_Chunk());
    LST.insert(MyPair(name, S));
}

void SoundManager::play(string name){
    Sound* ptr = LST[name];
    cout<<*ptr;
}
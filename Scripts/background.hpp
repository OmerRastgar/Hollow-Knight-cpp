#pragma once 
#include <iostream>
#include <list>
#include "player.hpp"
#include "Enemy.hpp"
#include "floor.hpp"
/**
 * \brief this class contains all objects to be drawn. with each player movement the objects are updated to
 * get the right coordinates for background scrolling
 * As we increase the different levels in this game, we just need to add more backgrounds so that each place will 
 * have it seperate enemies, player , and obj animation
 * */



class Background{

SDL_Rect moverbg;
player p1;
std::list <Enemy> E_list;
//std::list <sparkle> E_list;
//std::list <leafs> E_list;
//std::list <obj> E_list;

public:
void update(SDL_Event *e); 
void show(SDL_Renderer* gRenderer, SDL_Texture* player ,SDL_Texture* enemy, SDL_Texture* background );


};
#include "background.hpp"

/**
 * update method, collects all data and make neccessary changes for screen scrolling
 * */
void Background::update(SDL_Event *e){
    
    switch (e->key.keysym.sym)
    {
    case SDLK_SPACE :
        p1.move("Jump");    
        break;
    case SDLK_RIGHT :
        p1.move("East");    
        break; 
    case SDLK_LEFT :
        p1.move("West");    
        break; 
    case SDLK_x :
        p1.move("attack") ; 
        break; 
    default:
        break;
    }
    
    moverbg.x=  ((p1.return_rect(1)->x)/0.1399);
    for (auto i : E_list){
        i.return_rect(1)->x = i.offset-moverbg.x ;
    }
}
/**
 * show renders all object related to class
 * */
void Background::show(SDL_Renderer* gRenderer, SDL_Texture* assets ,SDL_Texture*  sprite_enemy, SDL_Texture* background ){
    SDL_RenderClear( gRenderer ); 
	SDL_RenderCopy( gRenderer, background,  &moverbg , NULL  );
	SDL_RenderCopy( gRenderer, assets,   p1.return_rect(2) , p1.return_rect(1)  );
	for (auto i : E_list){
        SDL_RenderCopy( gRenderer, sprite_enemy,   i.return_rect(2) , i.return_rect(1));
    }
    
    
}
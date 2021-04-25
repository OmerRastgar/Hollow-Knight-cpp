#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "menu.hpp"

// #include "menu.hpp"

// menu m1("pause",{0,0,1920,1080},{0,0,800,600});


//Screen dimension constants
const int SCREEN_WidTH = 800;
const int SCREEN_HEIGHT = 600;



//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();	




//Loads individual image as texture
SDL_Texture* loadTexture( std::string path );

//The window we'll be rendering to
SDL_Window* GWindow = NULL;

//The window renderer
SDL_Renderer* GRenderer = NULL;
//Current displayed texture
SDL_Texture* GTexture = NULL;
//global reference to png image sheets
SDL_Texture* assets=NULL;
SDL_Texture* options=NULL;
SDL_Texture* Assets=NULL;


// music reference
Mix_Music *bgMusic = NULL;
SDL_Rect mover= {0,0,800,600};
SDL_Rect scr=  {0,0,1920,1080};

bool init()
{
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

		//Create window
		GWindow = SDL_CreateWindow( "Menu", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WidTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN ); //made change
		if( GWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			GRenderer = SDL_CreateRenderer( GWindow, -1, SDL_RENDERER_ACCELERATED );
			if( GRenderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( GRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
					success = false;
				}
				/*
				if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
				{
					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
					success = false;
				}
				*/
			}
		}
	}

	return success;
}

bool loadMedia()
{
	//Loading success flag
	bool success = true;

	assets = loadTexture("pausemenu.png");
	options = loadTexture("options.png");
	Assets = loadTexture("MainMenu.png");
	
	if(assets==NULL)
    {
        printf("Unable to run due to error: %s\n",SDL_GetError());
        success =false;
    }
    if(Assets==NULL)
    {
        printf("Unable to run due to error: %s\n",SDL_GetError());
        success =false;
    }
	/*
	bgMusic = Mix_LoadMUS( "bgm.wav" );
	
	if(bgMusic == NULL ){
		printf("Unable to load music: %s \n", Mix_GetError());
		success = false;
	}
	*/	
	return success;
}


void close()
{
	//Free loaded images
	SDL_DestroyTexture(Assets);
	Assets=NULL;
	//Destroy window
	SDL_DestroyRenderer( GRenderer );
	SDL_DestroyWindow( GWindow );
	GWindow = NULL;
	GRenderer = NULL;
	Mix_FreeMusic(bgMusic);
	
	bgMusic = NULL;
	//Quit SDL subsystems
	IMG_Quit();
	Mix_Quit();
	SDL_Quit();
}

SDL_Texture* loadTexture( std::string path )
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( GRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}

void update(SDL_Renderer* GRenderer, SDL_Texture* Assets, string status){
	SDL_RenderClear( GRenderer ); // clearing screen for next screen output
	if (status == "pause"){
		SDL_RenderCopy( GRenderer, assets, NULL, NULL );
	}
	if (status == "option"){
		SDL_RenderCopy( GRenderer, options, NULL, NULL );
	}
	if (status == "MainMenu"){
		SDL_RenderCopy( GRenderer, Assets, NULL, NULL );
	}
	SDL_RenderPresent( GRenderer );	 // rendering the complete screen 
	SDL_Delay(5);	
}



int main( int argc, char* args[] )
{
    // SDL_RenderClear( GRenderer );
	SDL_RenderClear( GRenderer );

	//Start up SDL and create window
	
		//Main loop flag
	bool quit = false;
	Menu pause;
	Button Continue(398-50,253-20,398+50,253+20,"continue");
	Button Option(399-50,299-20,399+50,299+20,"option");
	Button Exit(399-50,337-20,399+50,337+20,"exit");
	pause.add(&Continue);
	pause.add(&Option);
	pause.add(&Exit);

	Menu MainMenu;
	Button Start_Game(398-50,253-20,398+50,253+20,"START GAME");
	Button option(399-50,299-20,399+50,299+20,"option");
	Button Achievements(399-50,337-20,399+50,337+20,"Achievements");
	Button Extras(399-50,380-20,399+50,380+20,"extras");
	Button Quit_Game(399-50,418-20,399+50,418+20,"Quit Game");
	MainMenu.add(&Start_Game);
	MainMenu.add(&option);
	MainMenu.add(&Achievements);
	MainMenu.add(&Extras);
	MainMenu.add(&Quit_Game);
	
	//Event handler
	SDL_Event e;
	int initialized , loaded;
	init();	
	loadMedia();
	loaded=1;
	string status= "pause";
	update(GRenderer, assets,status);
	string Status= "MainMenu";
	// update(GRenderer, Assets,status);
	
	//While application is running
	while( !quit  )
	{
		//Handle events on queue
		while( SDL_PollEvent( &e ) != 0 ) // getting x and y ordinates 
		{
			//User requests quit
			if( e.type == SDL_QUIT )
			{
				quit = true;
			}
			if (e.key.keysym.sym == SDLK_ESCAPE){
				status= "pause";		
			}

			if(e.type == SDL_MOUSEBUTTONDOWN){
			//this is a good location to add pigeon in linked list.
				string id;
				int xMouse, yMouse;
				SDL_GetMouseState(&xMouse,&yMouse);
				cout << xMouse<< " "<< yMouse;
				id= pause.check_buttons(xMouse,yMouse);
				
				if (id == "continue" and status == "pause" ){
					status= "continue";
				}
				if (id == "option" and status == "pause"){
					status = "option";
				}
				if (id == "exit" and status == "pause"){
					// quit = true;
					status= "MainMenu";
					
				}
				if (id == "START GAME" and Status == "MainMenu" ){
					Status= "START GAME";
				}
				if (id == "option" and Status == "MainMenu"){
					Status = "option";
				}
				if (id == "Achievements" and Status == "MainMenu"){
					Status = "Achievements";
				}
				if (id == "extras" and Status == "MainMenu"){
					Status = "extras";
				}
				if (id == "Quit Game" and Status == "MainMenu"){
					quit = true;
					// assets = loadTexture("pausemenu.png");
					
				}
				//humania.createObject(xMouse, yMouse);
			}

		}
		update(GRenderer, assets, status);
		/*
		if( Mix_PlayingMusic() == 0  )
		{
		
			Mix_PlayMusic( bgMusic, -1 );
			Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
		}*/
	
	}
	



	// //Free resources and close SDL
	// close();

	// return 0;

	////////////////////////////////////////////////////////////////////////////////////////////////

	//Start up SDL and create window
	
		//Main loop flag
	// bool Quit = false;
	// Menu MainMenu;
	// Button Start_Game(398-50,253-20,398+50,253+20,"START GAME");
	// Button option(399-50,299-20,399+50,299+20,"option");
	// Button Achievements(399-50,337-20,399+50,337+20,"Achievements");
	// Button Extras(399-50,380-20,399+50,380+20,"extras");
	// Button Quit_Game(399-50,418-20,399+50,418+20,"Quit Game");
	// MainMenu.add(&Start_Game);
	// MainMenu.add(&option);
	// MainMenu.add(&Achievements);
	// MainMenu.add(&Extras);
	// MainMenu.add(&Quit_Game);
	
	//Event handler
	// SDL_Event f;
	// int Initialized;
	//init();	
	//loadMedia();
	// loaded=1;
	// string status= "MainMenu";
	// update(GRenderer, assets,status);
	
	// //While application is running
	// while( !Quit  )
	// {
	// 	//Handle events on queue
	// 	while( SDL_PollEvent( &e ) != 0 ) // getting x and y ordinates 
	// 	{
	// 		//User requests quit
	// 		if( e.type == SDL_QUIT )
	// 		{
	// 			Quit = true;
	// 		}
	// 		if (e.key.keysym.sym == SDLK_ESCAPE){
	// 			status= "MainMenu";		
	// 		}

	// 		if(e.type == SDL_MOUSEBUTTONDOWN){
	// 			string id;
	// 		//this is a good location to add pigeon in linked list.

				
	// 			int xMouse, yMouse;
	// 			SDL_GetMouseState(&xMouse,&yMouse);
	// 			cout << xMouse<< " "<< yMouse;
	// 			id= MainMenu.check_buttons(xMouse,yMouse);
	// 			if (id == "START GAME" and status == "MainMenu" ){
	// 				status= "START GAME";
	// 			}
	// 			if (id == "option" and status == "MainMenu"){
	// 				status = "option";
	// 			}
	// 			if (id == "Achievements" and status == "MainMenu"){
	// 				status = "Achievements";
	// 			}
	// 			if (id == "extras" and status == "MainMenu"){
	// 				status = "extras";
	// 			}
	// 			if (id == "Quit Game" and status == "MainMenu"){
	// 				Quit = true;
	// 				// assets = loadTexture("pausemenu.png");
					
	// 			}
	// 		}

	// 	}
	// 	update(GRenderer, Assets, status);
	// 	/*
	// 	if( Mix_PlayingMusic() == 0  )
	// 	{
		
	// 		Mix_PlayMusic( bgMusic, -1 );
	// 		Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
	// 	}*/
	
	// }
	



	//Free resources and close SDL
	close();

	return 0;
}



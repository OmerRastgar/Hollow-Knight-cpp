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
const int SCREEN_WIDTH = 800;
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
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

//Current displayed texture
SDL_Texture* gTexture = NULL;
//global reference to png image sheets
SDL_Texture* assets=NULL;
SDL_Texture* options=NULL;

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
		gWindow = SDL_CreateWindow( "Menu", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN ); //made change
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
			if( gRenderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

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
    if(assets==NULL)
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
	SDL_DestroyTexture(assets);
	assets=NULL;
	//Destroy window
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;
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
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}

void update(SDL_Renderer* gRenderer, SDL_Texture* assets, string status){
	SDL_RenderClear( gRenderer ); // clearing screen for next screen output
	if (status == "pause"){
		SDL_RenderCopy( gRenderer, assets, NULL, NULL );
	}
	if (status == "option"){
		SDL_RenderCopy( gRenderer, options, NULL, NULL );
	}
	SDL_RenderPresent( gRenderer );	 // rendering the complete screen 
	SDL_Delay(5);	
}



int main( int argc, char* args[] )
{
    SDL_RenderClear( gRenderer );

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
	
	//Event handler
	SDL_Event e;
	int initialized , loaded;
	init();	
	loadMedia();
	loaded=1;
	string status= "pause";
	update(gRenderer, assets,status);
	
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

			if(e.type == SDL_MOUSEBUTTONDOWN){
			//this is a good location to add pigeon in linked list.
				string id;
				int xMouse, yMouse;
				SDL_GetMouseState(&xMouse,&yMouse);
				cout << xMouse<< " "<< yMouse;
				id= pause.check_buttons(xMouse,yMouse);
				if (id == "continue"){
					status= "continue";
				}
				if (id == "option"){
					status = "option";
				}
				if (id == "exit"){
					status = "exit";
					
				}
				//humania.createObject(xMouse, yMouse);
			}

		}
		update(gRenderer, assets, status);
		/*
		if( Mix_PlayingMusic() == 0  )
		{
		
			Mix_PlayMusic( bgMusic, -1 );
			Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
		}*/
	
	}
	



	//Free resources and close SDL
	close();

	return 0;
}



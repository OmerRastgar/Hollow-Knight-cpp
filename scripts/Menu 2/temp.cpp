// #pragma once
// #include <SDL.h>
// #include <SDL_image.h>
// #include <SDL_mixer.h>
// #include <stdio.h>
// #include <iostream>
// #include <string>
// #include "menu.hpp"

// // #include "menu.hpp"

// // menu m1("pause",{0,0,1920,1080},{0,0,800,600});


// //Screen dimension constants
// const int SCREEN_WIDTH = 800;
// const int SCREEN_HEIGHT = 600;



// //Starts up SDL and creates window
// bool init(SDL_Window* gWindow, SDL_Renderer* gRenderer);

// //Loads media
// bool loadMedia(SDL_Texture* assets,SDL_Texture* options);

// //Frees media and shuts down SDL
// void close(SDL_Texture* assets,SDL_Window* gWindow,SDL_Renderer* gRenderer);




// //Loads individual image as texture
// SDL_Texture* loadTexture( std::string path );

// //The window we'll be rendering to
// SDL_Window* gWindow = NULL;
// SDL_Window* GWindow = NULL;

// //The window renderer
// SDL_Renderer* gRenderer = NULL;
// SDL_Renderer* GRenderer = NULL;
// //Current displayed texture
// SDL_Texture* gTexture = NULL;
// SDL_Texture* GTexture = NULL;
// //global reference to png image sheets
// SDL_Texture* assets=NULL;
// SDL_Texture* options=NULL;
// SDL_Texture* Assets=NULL;
// SDL_Texture* Options=NULL;

// // music reference
// Mix_Music *bgMusic = NULL;
// SDL_Rect mover= {0,0,800,600};
// SDL_Rect scr=  {0,0,1920,1080};

// bool init(SDL_Window* gWindow,SDL_Renderer* gRenderer)
// {
// 	//Initialization flag
// 	bool success = true;

// 	//Initialize SDL
// 	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
// 	{
// 		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
// 		success = false;
// 	}
// 	else
// 	{
// 		//Set texture filtering to linear
// 		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
// 		{
// 			printf( "Warning: Linear texture filtering not enabled!" );
// 		}

// 		//Create window
// 		gWindow = SDL_CreateWindow( "Menu", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN ); //made change
// 		if( gWindow == NULL )
// 		{
// 			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
// 			success = false;
// 		}
// 		else
// 		{
// 			//Create renderer for window
// 			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
// 			if( gRenderer == NULL )
// 			{
// 				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
// 				success = false;
// 			}
// 			else
// 			{
// 				//Initialize renderer color
// 				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

// 				//Initialize PNG loading
// 				int imgFlags = IMG_INIT_PNG;
// 				if( !( IMG_Init( imgFlags ) & imgFlags ) )
// 				{
// 					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
// 					success = false;
// 				}
// 				/*
// 				if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
// 				{
// 					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
// 					success = false;
// 				}
// 				*/
// 			}
// 		}
// 	}

// 	return success;
// }

// bool loadMedia(SDL_Texture* assets,SDL_Texture* options)
// {
// 	//Loading success flag
// 	bool success = true;

// 	// assets = loadTexture("pausemenu.png");
// 	// options = loadTexture("options.png");
// 	// Assets = loadTexture("MainMenu.png");
// 	// Options = loadTexture("MainMenu.png");
	
//     if(assets==NULL)
//     {
//         printf("Unable to run due to error: %s\n",SDL_GetError());
//         success =false;
//     }
// 	/*
// 	bgMusic = Mix_LoadMUS( "bgm.wav" );
	
// 	if(bgMusic == NULL ){
// 		printf("Unable to load music: %s \n", Mix_GetError());
// 		success = false;
// 	}
// 	*/	
// 	return success;
// }


// void close(SDL_Texture* assets,SDL_Window* gWindow,SDL_Renderer* gRenderer)
// {
// 	//Free loaded images
// 	SDL_DestroyTexture(assets);
// 	assets=NULL;
// 	//Destroy window
// 	SDL_DestroyRenderer( gRenderer );
// 	SDL_DestroyWindow( gWindow );
// 	gWindow = NULL;
// 	gRenderer = NULL;
// 	Mix_FreeMusic(bgMusic);
	
// 	bgMusic = NULL;
// 	//Quit SDL subsystems
// 	IMG_Quit();
// 	Mix_Quit();
// 	SDL_Quit();
// }

// SDL_Texture* loadTexture( std::string path )
// {
// 	//The final texture
// 	SDL_Texture* newTexture = NULL;

// 	//Load image at specified path
// 	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
// 	if( loadedSurface == NULL )
// 	{
// 		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
// 	}
// 	else
// 	{
// 		//Create texture from surface pixels
//         newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
// 		if( newTexture == NULL )
// 		{
// 			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
// 		}

// 		//Get rid of old loaded surface
// 		SDL_FreeSurface( loadedSurface );
// 	}

// 	return newTexture;
// }

// void update(SDL_Renderer* gRenderer, SDL_Texture* assets, string status){
// 	SDL_RenderClear( gRenderer ); // clearing screen for next screen output
// 	if (status == "pause"){
// 		SDL_RenderCopy( gRenderer, assets, NULL, NULL );
// 	}
// 	if (status == "option"){
// 		SDL_RenderCopy( gRenderer, options, NULL, NULL );
// 	}
// 	SDL_RenderPresent( gRenderer );	 // rendering the complete screen 
// 	SDL_Delay(5);	
// }



// int main( int argc, char* args[] )
// {
//     SDL_RenderClear( gRenderer );
// 	SDL_RenderClear( GRenderer );

// 	//Start up SDL and create window
	
// 		//Main loop flag
// 	bool quit = false;
// 	Menu pause;
// 	Button Continue(398-50,253-20,398+50,253+20,"continue");
// 	Button Option(399-50,299-20,399+50,299+20,"option");
// 	Button Exit(399-50,337-20,399+50,337+20,"exit");
// 	pause.add(&Continue);
// 	pause.add(&Option);
// 	pause.add(&Exit);
	
// 	//Event handler
// 	SDL_Event e;
// 	int initialized , loaded;
// 	init(gWindow,gRenderer);	
// 	loadMedia(assets = loadTexture("pausemenu.png"),options = loadTexture("options.png"));
// 	loaded=1;
// 	string status= "pause";
// 	update(gRenderer, assets,status);
	
// 	//While application is running
// 	while( !quit  )
// 	{
// 		//Handle events on queue
// 		while( SDL_PollEvent( &e ) != 0 ) // getting x and y ordinates 
// 		{
// 			//User requests quit
// 			if( e.type == SDL_QUIT )
// 			{
// 				quit = true;
// 			}
// 			if (e.key.keysym.sym == SDLK_ESCAPE){
// 				status= "pause";		
// 			}

// 			if(e.type == SDL_MOUSEBUTTONDOWN){
// 			//this is a good location to add pigeon in linked list.
// 				string id;
// 				int xMouse, yMouse;
// 				SDL_GetMouseState(&xMouse,&yMouse);
// 				cout << xMouse<< " "<< yMouse;
// 				id= pause.check_buttons(xMouse,yMouse);
// 				if (id == "continue" and status == "pause" ){
// 					status= "continue";
// 				}
// 				if (id == "option" and status == "pause"){
// 					status = "option";
// 				}
// 				if (id == "exit" and status == "pause"){
// 					quit = true;
					
// 				}
// 				//humania.createObject(xMouse, yMouse);
// 			}

// 		}
// 		update(gRenderer, assets, status);
// 		/*
// 		if( Mix_PlayingMusic() == 0  )
// 		{
		
// 			Mix_PlayMusic( bgMusic, -1 );
// 			Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
// 		}*/
	
// 	}
	



// 	// //Free resources and close SDL
// 	//close();

// 	// return 0;

// 	////////////////////////////////////////////////////////////////////////////////////////////////

// 	//Start up SDL and create window
	
// 		//Main loop flag
// 	// bool Quit = false;
// 	// Menu MainMenu;
// 	// Button Start_Game(398-50,253-20,398+50,253+20,"START GAME");
// 	// Button option(399-50,299-20,399+50,299+20,"option");
// 	// Button Achievements(399-50,337-20,399+50,337+20,"Achievements");
// 	// Button Extras(399-50,380-20,399+50,380+20,"extras");
// 	// Button Quit_Game(399-50,418-20,399+50,418+20,"Quit Game");
// 	// MainMenu.add(&Start_Game);
// 	// MainMenu.add(&option);
// 	// MainMenu.add(&Achievements);
// 	// MainMenu.add(&Extras);
// 	// MainMenu.add(&Quit_Game);
	
// 	// //Event handler
// 	// SDL_Event f;
// 	// int Initialized , Loaded;
// 	// init(GWindow,GRenderer);	
// 	// loadMedia(assets = loadTexture("MainMenu.png"),options = loadTexture("MainMenu.png"));
// 	// Loaded=1;
// 	// string Status= "MainMenu";
// 	// update(GRenderer, assets,Status);
	
// 	// //While application is running
// 	// while( !Quit  )
// 	// {
// 	// 	//Handle events on queue
// 	// 	while( SDL_PollEvent( &f ) != 0 ) // getting x and y ordinates 
// 	// 	{
// 	// 		//User requests quit
// 	// 		if( f.type == SDL_QUIT )
// 	// 		{
// 	// 			Quit = true;
// 	// 		}
// 	// 		if (f.key.keysym.sym == SDLK_ESCAPE){
// 	// 			Status= "MainMenu";		
// 	// 		}

// 	// 		if(f.type == SDL_MOUSEBUTTONDOWN){
// 	// 		//this is a good location to add pigeon in linked list.
// 	// 			string ID;
// 	// 			int XMouse, YMouse;
// 	// 			SDL_GetMouseState(&XMouse,&YMouse);
// 	// 			cout << XMouse<< " "<< YMouse;
// 	// 			ID= MainMenu.check_buttons(XMouse,YMouse);
// 	// 			if (ID == "START GAME" and status == "MainMenu" ){
// 	// 				Status= "START GAME";
// 	// 			}
// 	// 			if (ID == "option" and status == "MainMenu"){
// 	// 				Status = "option";
// 	// 			}
// 	// 			if (ID == "Achievements" and status == "MainMenu"){
// 	// 				Status = "Achievements";
// 	// 			}
// 	// 			if (ID == "extras" and status == "MainMenu"){
// 	// 				Status = "extras";
// 	// 			}
// 	// 			if (ID == "Quit Game" and status == "MainMenu"){
// 	// 				Quit = true;
// 	// 				// assets = loadTexture("pausemenu.png");
					
// 	// 			}
// 	// 			//humania.createObject(xMouse, yMouse);
// 	// 		}

// 	// 	}
// 	// 	update(GRenderer, assets, Status);
// 	// 	/*
// 	// 	if( Mix_PlayingMusic() == 0  )
// 	// 	{
		
// 	// 		Mix_PlayMusic( bgMusic, -1 );
// 	// 		Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
// 	// 	}*/
	
// 	// }
	



// 	//Free resources and close SDL
// 	close(assets,gWindow,gRenderer);
// 	// close(assets,GWindow,GRenderer);

// 	return 0;
// }


// ////////////////
// #pragma once
// #include <SDL.h>
// #include <SDL_image.h>
// #include <SDL_mixer.h>
// #include <stdio.h>
// #include <iostream>
// #include <string>
// #include "menu.hpp"

// // #include "menu.hpp"

// // menu m1("pause",{0,0,1920,1080},{0,0,800,600});


// //Screen dimension constants
// const int SCREEN_WIDTH = 800;
// const int SCREEN_HEIGHT = 600;



// //Starts up SDL and creates window
// bool init();

// //Loads media
// bool loadMedia();

// //Frees media and shuts down SDL
// void close();




// //Loads individual image as texture
// SDL_Texture* loadTexture( std::string path );

// //The window we'll be rendering to
// SDL_Window* gWindow = NULL;
// SDL_Window* GWindow = NULL;

// //The window renderer
// SDL_Renderer* gRenderer = NULL;
// SDL_Renderer* GRenderer = NULL;
// //Current displayed texture
// SDL_Texture* gTexture = NULL;
// SDL_Texture* GTexture = NULL;
// //global reference to png image sheets
// SDL_Texture* assets=NULL;
// SDL_Texture* options=NULL;
// SDL_Texture* Assets=NULL;
// SDL_Texture* Options=NULL;

// // music reference
// Mix_Music *bgMusic = NULL;
// SDL_Rect mover= {0,0,800,600};
// SDL_Rect scr=  {0,0,1920,1080};

// bool init()
// {
// 	//Initialization flag
// 	bool success = true;

// 	//Initialize SDL
// 	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
// 	{
// 		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
// 		success = false;
// 	}
// 	else
// 	{
// 		//Set texture filtering to linear
// 		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
// 		{
// 			printf( "Warning: Linear texture filtering not enabled!" );
// 		}

// 		//Create window
// 		GWindow = SDL_CreateWindow( "Menu", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN ); //made change
// 		if( GWindow == NULL )
// 		{
// 			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
// 			success = false;
// 		}
// 		else
// 		{
// 			//Create renderer for window
// 			GRenderer = SDL_CreateRenderer( GWindow, -1, SDL_RENDERER_ACCELERATED );
// 			if( GRenderer == NULL )
// 			{
// 				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
// 				success = false;
// 			}
// 			else
// 			{
// 				//Initialize renderer color
// 				SDL_SetRenderDrawColor( GRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

// 				//Initialize PNG loading
// 				int imgFlags = IMG_INIT_PNG;
// 				if( !( IMG_Init( imgFlags ) & imgFlags ) )
// 				{
// 					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
// 					success = false;
// 				}
// 				/*
// 				if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
// 				{
// 					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
// 					success = false;
// 				}
// 				*/
// 			}
// 		}
// 	}

// 	return success;
// }

// bool loadMedia()
// {
// 	//Loading success flag
// 	bool success = true;

// 	assets = loadTexture("pausemenu.png");
// 	options = loadTexture("options.png");
// 	Assets = loadTexture("MainMenu.png");
// 	Options = loadTexture("MainMenu.png");
	
//     if(Assets==NULL)
//     {
//         printf("Unable to run due to error: %s\n",SDL_GetError());
//         success =false;
//     }
// 	/*
// 	bgMusic = Mix_LoadMUS( "bgm.wav" );
	
// 	if(bgMusic == NULL ){
// 		printf("Unable to load music: %s \n", Mix_GetError());
// 		success = false;
// 	}
// 	*/	
// 	return success;
// }


// void close()
// {
// 	//Free loaded images
// 	SDL_DestroyTexture(Assets);
// 	Assets=NULL;
// 	//Destroy window
// 	SDL_DestroyRenderer( GRenderer );
// 	SDL_DestroyWindow( GWindow );
// 	GWindow = NULL;
// 	GRenderer = NULL;
// 	Mix_FreeMusic(bgMusic);
	
// 	bgMusic = NULL;
// 	//Quit SDL subsystems
// 	IMG_Quit();
// 	Mix_Quit();
// 	SDL_Quit();
// }

// SDL_Texture* loadTexture( std::string path )
// {
// 	//The final texture
// 	SDL_Texture* newTexture = NULL;

// 	//Load image at specified path
// 	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
// 	if( loadedSurface == NULL )
// 	{
// 		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
// 	}
// 	else
// 	{
// 		//Create texture from surface pixels
//         newTexture = SDL_CreateTextureFromSurface( GRenderer, loadedSurface );
// 		if( newTexture == NULL )
// 		{
// 			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
// 		}

// 		//Get rid of old loaded surface
// 		SDL_FreeSurface( loadedSurface );
// 	}

// 	return newTexture;
// }

// void update(SDL_Renderer* GRenderer, SDL_Texture* Assets, string Status){
// 	SDL_RenderClear( GRenderer ); // clearing screen for next screen output
// 	if (Status == "START GAME"){
// 		SDL_RenderCopy( GRenderer, Assets, NULL, NULL );
// 	}
// 	if (Status == "option"){
// 		SDL_RenderCopy( GRenderer, Options, NULL, NULL );
// 	}
// 	if (Status == "Achievements"){
// 		SDL_RenderCopy( GRenderer, Options, NULL, NULL );
// 	}
// 	if (Status == "extras"){
// 		SDL_RenderCopy( GRenderer, Options, NULL, NULL );
// 	}
// 	if (Status == "Quit Game"){
// 		SDL_RenderCopy( GRenderer, Options, NULL, NULL );
// 	}
// 	SDL_RenderPresent( GRenderer );	 // rendering the complete screen 
// 	SDL_Delay(5);	
// }



// int main( int argc, char* args[] )
// {
//     // SDL_RenderClear( gRenderer );
// 	SDL_RenderClear( GRenderer );

// 	//Start up SDL and create window
	
// 		//Main loop flag
// 	bool quit = false;
// 	Menu pause;
// 	Button Continue(398-50,253-20,398+50,253+20,"continue");
// 	Button Option(399-50,299-20,399+50,299+20,"option");
// 	Button Exit(399-50,337-20,399+50,337+20,"exit");
// 	pause.add(&Continue);
// 	pause.add(&Option);
// 	pause.add(&Exit);
	
// 	//Event handler
// 	SDL_Event e;
// 	int initialized , loaded;
// 	init();	
// 	loadMedia();
// 	loaded=1;
// 	string status= "pause";
// 	update(gRenderer, assets,status);
	
// 	//While application is running
// 	while( !quit  )
// 	{
// 		//Handle events on queue
// 		while( SDL_PollEvent( &e ) != 0 ) // getting x and y ordinates 
// 		{
// 			//User requests quit
// 			if( e.type == SDL_QUIT )
// 			{
// 				quit = true;
// 			}
// 			if (e.key.keysym.sym == SDLK_ESCAPE){
// 				status= "pause";		
// 			}

// 			if(e.type == SDL_MOUSEBUTTONDOWN){
// 			//this is a good location to add pigeon in linked list.
// 				string id;
// 				int xMouse, yMouse;
// 				SDL_GetMouseState(&xMouse,&yMouse);
// 				cout << xMouse<< " "<< yMouse;
// 				id= pause.check_buttons(xMouse,yMouse);
// 				if (id == "continue" and status == "pause" ){
// 					status= "continue";
// 				}
// 				if (id == "option" and status == "pause"){
// 					status = "option";
// 				}
// 				if (id == "exit" and status == "pause"){
// 					quit = true;
					
// 				}
// 				//humania.createObject(xMouse, yMouse);
// 			}

// 		}
// 		update(gRenderer, assets, status);
// 		/*
// 		if( Mix_PlayingMusic() == 0  )
// 		{
		
// 			Mix_PlayMusic( bgMusic, -1 );
// 			Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
// 		}*/
	
// 	}
	



// 	// //Free resources and close SDL
// 	close();

// 	// return 0;

// 	////////////////////////////////////////////////////////////////////////////////////////////////

// 	//Start up SDL and create window
	
// 		//Main loop flag
// 	bool Quit = false;
// 	Menu MainMenu;
// 	Button Start_Game(398-50,253-20,398+50,253+20,"START GAME");
// 	Button option(399-50,299-20,399+50,299+20,"option");
// 	Button Achievements(399-50,337-20,399+50,337+20,"Achievements");
// 	Button Extras(399-50,380-20,399+50,380+20,"extras");
// 	Button Quit_Game(399-50,418-20,399+50,418+20,"Quit Game");
// 	MainMenu.add(&Start_Game);
// 	MainMenu.add(&option);
// 	MainMenu.add(&Achievements);
// 	MainMenu.add(&Extras);
// 	MainMenu.add(&Quit_Game);
	
// 	//Event handler
// 	SDL_Event f;
// 	int Initialized , Loaded;
// 	init();	
// 	loadMedia();
// 	Loaded=1;
// 	string Status= "pause";
// 	update(GRenderer, Assets,Status);
	
// 	//While application is running
// 	while( !Quit  )
// 	{
// 		//Handle events on queue
// 		while( SDL_PollEvent( &f ) != 0 ) // getting x and y ordinates 
// 		{
// 			//User requests quit
// 			if( f.type == SDL_QUIT )
// 			{
// 				Quit = true;
// 			}
// 			if (f.key.keysym.sym == SDLK_ESCAPE){
// 				Status= "pause";		
// 			}

// 			if(f.type == SDL_MOUSEBUTTONDOWN){
// 			//this is a good location to add pigeon in linked list.
// 				string ID;
// 				int XMouse, YMouse;
// 				SDL_GetMouseState(&XMouse,&YMouse);
// 				cout << XMouse<< " "<< YMouse;
// 				ID= MainMenu.check_buttons(XMouse,YMouse);
// 				if (ID == "START GAME" and Status == "pause" ){
// 					Status= "START GAME";
// 				}
// 				if (ID == "option" and Status == "pause"){
// 					Status = "option";
// 				}
// 				if (ID == "Achievements" and Status == "pause"){
// 					Status = "Achievements";
// 				}
// 				if (ID == "extras" and Status == "pause"){
// 					Status = "extras";
// 				}
// 				if (ID == "Quit Game" and Status == "pause"){
// 					Quit = true;
// 					// assets = loadTexture("pausemenu.png");
					
// 				}
// 				//humania.createObject(xMouse, yMouse);
// 			}

// 		}
// 		update(GRenderer, Assets, Status);
// 		/*
// 		if( Mix_PlayingMusic() == 0  )
// 		{
		
// 			Mix_PlayMusic( bgMusic, -1 );
// 			Mix_VolumeMusic(MIX_MAX_VOLUME/16);
			
// 		}*/
	
// 	}
	



// 	//Free resources and close SDL
// 	close();

// 	return 0;
// }



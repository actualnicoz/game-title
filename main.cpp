#include "SDL.h"

int main(){

  //TODO: Add error handling
  SDL_Init(SDL_INIT_VIDEO);

  //set the title
  SDL_WM_SetCaption("Game Title", "Game Title");

  //create a window
  SDL_Surface* window = SDL_SetVideoMode(640, 480, 0, 0);

  //create SDL event structure
  SDL_Event event;
  int gameOver = 0;

  //game loop
  while(!gameOver){
    if(SDL_PollEvent(&event)){
      switch(event.type){
      case SDL_QUIT:
	gameOver = 1;
	break;
      }
    }
  }

  //clean up SDL
  SDL_Quit();
  return 0;
}

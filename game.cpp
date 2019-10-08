#include "game.h"

Game::Game(std::size_t grid_width, std::size_t grid_height){
  SDL_Event event;
  int gameOver = 0;

  //game loop
  while(!gameOver){
    if(SDL_PollEvent(&event)){
      //renderer.UpdateWindowTitle();
      switch(event.type){
      case SDL_QUIT:
	gameOver = 1;
	break;
      }
    }
  }
}

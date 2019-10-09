#include "game.h"

Game::Game(std::size_t grid_width, std::size_t grid_height){
  SDL_Event event;
  bool running = true;

  //game loop
  while(running){
    if(SDL_PollEvent(&event)){
      //renderer.UpdateWindowTitle();
      switch(event.type){
      case SDL_QUIT:
        running = false;
	break;
      }
    }
  }
}

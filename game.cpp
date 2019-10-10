#include "SDL.h"
#include "game.h"
#include "renderer.h"

Game::Game(std::size_t grid_width, std::size_t grid_height){
}

void Game::Run(Renderer &renderer){
  SDL_Event event;
  bool running = true;
  while(running){
    renderer.UpdateWindowTitle();
    renderer.UpdateBackgroundColor();
    SDL_Delay(5000);
  }
}

#include "SDL.h"
#include "game.h"
#include "renderer.h"

Game::Game(std::size_t grid_width, std::size_t grid_height){
}

void Game::Run(Renderer &renderer, int kMsPerFrame){
  Uint32 title_timestamp = SDL_GetTicks();
  Uint32 frame_start;
  Uint32 frame_end;
  Uint32 frame_duration;
  int frame_count = 0;
  
  SDL_Event event;
  bool running = true;
  while(running){
    frame_start = SDL_GetTicks();
    
    renderer.UpdateWindowTitle(frame_count);

    frame_end = SDL_GetTicks();

    frame_count++;
    frame_duration = frame_end - frame_start;
    if(frame_end - title_timestamp >= 1000){
      renderer.UpdateWindowTitle(frame_count);
      renderer.UpdateBackgroundColor();
      frame_count = 0;
      title_timestamp = frame_end;
    }

    if(frame_duration < kMsPerFrame){
      SDL_Delay(kMsPerFrame - frame_duration);
    }
    
    SDL_Delay(5000);
    running = false;
  }
}

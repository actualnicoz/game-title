#include "renderer.h"
#include <iostream>
#include <string>

Renderer::Renderer(const std::size_t screen_width, const std::size_t screen_height, const std::size_t grid_width, const std::size_t grid_height)
  : screen_width(screen_width), screen_height(screen_height),
    grid_width(grid_width), grid_height(grid_height) {
  
  //TODO: Add error handling
  SDL_Init(SDL_INIT_VIDEO);

  //TODO: Add error handling
  win = SDL_CreateWindow("Game Title", SDL_WINDOWPOS_CENTERED,
			 SDL_WINDOWPOS_CENTERED, screen_width,
			 screen_height, SDL_WINDOW_RESIZABLE);

  renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
}

Renderer::~Renderer(){
  SDL_DestroyWindow(win);
  SDL_Quit();
}

void Renderer::UpdateWindowTitle(){
  const char *title = "t";
  SDL_SetWindowTitle(win, title);
}

#ifndef GAME_H
#define GAME_H

#include "renderer.h"
#include "SDL.h"

class Game {
 public:
  //constructor
  Game(std::size_t grid_width, std::size_t grid_height);
  
  void Run(Renderer &renderer, int kMsPerFrame);
  void UpdateBackgroundColor();

 private:
  bool running;
};

#endif

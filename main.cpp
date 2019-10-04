#include "SDL.h"
#include "renderer.h"

int main(){
  constexpr std::size_t kScreenWidth(640);
  constexpr std::size_t kScreenHeight(640);
  constexpr std::size_t kGridWidth(32);
  constexpr std::size_t kGridHeight(32);
  
  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  
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

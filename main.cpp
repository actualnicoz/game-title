#include "SDL.h"
#include "renderer.h"
#include "game.h"

int main(){
  constexpr int Fps{60};
  constexpr int kMsPerFrame{1000/Fps};
  constexpr std::size_t kScreenWidth(640);
  constexpr std::size_t kScreenHeight(640);
  constexpr std::size_t kGridWidth(32);
  constexpr std::size_t kGridHeight(32);
  
  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Game game(kGridWidth, kGridHeight);
  game.Run(renderer, kMsPerFrame);
  return 0;
}

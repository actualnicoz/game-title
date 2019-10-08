#include "SDL.h"
#include "renderer.h"
#include "game.h"

int main(){
  constexpr std::size_t kScreenWidth(640);
  constexpr std::size_t kScreenHeight(640);
  constexpr std::size_t kGridWidth(32);
  constexpr std::size_t kGridHeight(32);
  
  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  renderer.UpdateWindowTitle();
  Game game(kGridWidth, kGridHeight);
  
  return 0;
}

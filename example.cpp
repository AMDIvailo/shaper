#include "shaper.cpp"
int main()
{
  shaper myshape("square");
  myshape.setSymbol('1');
  myshape.setSize(10, 10);
  myshape.setSolid(true);
  myshape.draw();
}
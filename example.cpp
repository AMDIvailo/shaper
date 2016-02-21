#include "shaper.cpp"
int main()
{
  shaper myshape("rectangle");
  myshape.setSymbol('1');
  myshape.setSize(10, 100);
  myshape.setSolid(true);
  myshape.draw();
}
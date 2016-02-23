#include "shaper.cpp"
int main()
{
  shaper myshape("triangle");
  myshape.setSymbol('1');
  myshape.setSize(10, 10);
  myshape.setSolid(true);
  for(;;)
  {
  myshape.setTriangleType("right-bottom");
  myshape.draw();
  myshape.setSolid(false);
  myshape.setShapeType("square");
  myshape.draw();
  myshape.setSolid(true);
  myshape.setShapeType("triangle");
  myshape.setTriangleType("right-top");
  myshape.draw();
  }
}

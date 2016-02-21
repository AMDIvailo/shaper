#include <iostream>
#include <string>
using namespace std;
class shaper
{
private:
  string shapetype;
  char symboltouse;
  int height;
  int width;
  bool isSolid;
  
public:
  shaper(string shape)
  {
    if(shape == "square")
    {
      setShapeType("square");
    }
    else if(shape == "rectangle")
    {
      setShapeType("rectangle");
    }
    else
    {
      cout << "Error! Bad constructor parameter!" << endl;
    }
  }
  void draw()
  {
    if(getShapeType() == "square")
    {
      square(isSolid, symboltouse, height);
    }
    else if(getShapeType() == "rectangle")
    {
      rectangle(isSolid, symboltouse, height, width);
    }
  }
  void square(bool isSolid, char symboltouse, int heightwidth)
  {
    if(isSolid == true)
    {
      for(int rownmb = 1; rownmb <= heightwidth; rownmb++)
      {
	for(int symnmb = 1; symnmb <= heightwidth; symnmb++)
	{
	cout << symboltouse;
	}
      cout << endl;
      }
    }
    else
    {
      for(int rownmb = 1; rownmb <= heightwidth; rownmb++)
      {
	if(rownmb == 1 || rownmb == heightwidth)
	{
	  for(int symnmb = 1; symnmb <= heightwidth; symnmb++)
	  {
	  cout << symboltouse;
	  }
	  cout << endl;
	}
	else
	{
	  for(int symnmb = 1; symnmb <= heightwidth; symnmb++)
	  {
	    if(symnmb == 1 || symnmb == heightwidth)
	    {
	    cout << symboltouse;
	    }
	    else
	    {
	    cout << " ";
	    }
	  }
	  cout << endl;
	}
      }
    }
  }
  void rectangle(bool isSolid, char symboltouse, int height, int width)
  {
    if(isSolid == true)
    {
      for(int rownmb = 1; rownmb <= height; rownmb++)
      {
	for(int symnmb = 1; symnmb <= width; symnmb++)
	{
	cout << symboltouse;
	}
      cout << endl;
      }
    }
    else
    {
      for(int rownmb = 1; rownmb <= height; rownmb++)
      {
	if(rownmb == 1 || rownmb == height)
	{
	  for(int symnmb = 1; symnmb <= width; symnmb++)
	  {
	  cout << symboltouse;
	  }
	  cout << endl;
	}
	else
	{
	  for(int symnmb = 1; symnmb <= width; symnmb++)
	  {
	    if(symnmb == 1 || symnmb == width)
	    {
	    cout << symboltouse;
	    }
	    else
	    {
	    cout << " ";
	    }
	  }
	  cout << endl;
	}
      }
    }
  }
  void setShapeType(string shape)
  {
    shapetype = shape;
  }
  string getShapeType()
  {
    return shapetype;
  }
  void setSymbol(char symbol)
  {
    symboltouse = symbol;
  }
  void setSize(int y=0, int x=0)
  {
    width=x;
    height=y;
  }
  void setSolid(bool solid)
  {
    isSolid=solid;
  }
}; 

int main()
{
  shaper myshape("rectangle");
  myshape.setSymbol('1');
  myshape.setSize(10, 100);
  myshape.setSolid(true);
  myshape.draw();
}
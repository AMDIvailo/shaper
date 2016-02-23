//Shaper  Copyright (C) 2016  AMDIvailo

//This file is part of Shaper.

//Shaper is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Shaper is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with Shaper.  If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <string>
using namespace std;
class shaper
{
private:
  string shapetype;
  string triangletype;
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
    else if(shape == "triangle")
    {
      setShapeType("triangle");
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
    else if(getShapeType() == "triangle")
    {
      triangle(isSolid, symboltouse, height, width);
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
  void triangle(bool isSolid, char symboltouse, int height, int width)
  {
    if(triangletype == "right-top")
    {
      if(isSolid == true)
      {
	for(int rownmb = 1; rownmb <= height; rownmb++)
	{
	  for(int symnmb = 0; symnmb <= width-rownmb; symnmb++)
	  {
	  cout << symboltouse;
	  }
	cout << endl;
	}
      }
      else
      {
	cout << "Not implemented yet!" << endl;
      }
    }
    else if(triangletype == "right-bottom")
    {
      if(isSolid == true)
      {
	for(int rownmb = 1; rownmb <= height; rownmb++)
	{
	  for(int symnmb = 2; symnmb <= 1+rownmb; symnmb++)
	  {
	  cout << symboltouse;
	  }
	cout << endl;
	}
      }
      else
      {
	cout << "Not implemented yet!" << endl;
      }
    }
    else if(triangletype == "isosceles-top")
    {
      if(isSolid == true)
      {
	for(int rownmb = 1; rownmb <= height; rownmb++)
	{
	  for(int bspace = rownmb; bspace >=1; bspace--)
	  {
	  cout << " ";
	  }
	  for(int symnmb = 0; symnmb <= width-rownmb; symnmb++)
	  {
	    for(int reps = 0; reps <= 1; reps++)
	    {
	    cout << symboltouse;
	    }
	  }
	cout << endl;
	}
      }
      else
      {
	cout << "Not implemented yet!" << endl;
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
  void setSolid(bool solid = false)
  {
    isSolid=solid;
  }
  void setTriangleType(string ttype)
  {
    triangletype = ttype;
  }
}; 

#pragma once
#include <iostream>
#include "Complex.h"

class Menu
{
private:
  Complex z1, z2;
  void Menuwrite();
  void setValue();
  void Add();
  void Subtract();
  void Multiply();
  void Divide();
  void Write();
public:
  Menu();
  ~Menu(){}
  void run();
};

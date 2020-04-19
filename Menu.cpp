#include <iostream>
#include "Menu.h"

void Menu::Menuwrite()
{
  std::cout << "0 - exit\n";
  std::cout << "1 - setValue\n";
  std::cout << "2 - Add\n";
  std::cout << "3 - Subtract\n";
  std::cout << "4 - Multiply\n";
  std::cout << "5 - Divide\n";
  std::cout << "6 - Write\n";
}

void Menu::setValue()
{
  float x, y;
  std::cin >> x >> y;
  z1.setValue(x, y);
  std::cin >> x >> y;
  z2.setValue(x, y);
}

void Menu::Add()
{
  Complex res = z1 + z2;
  std::cout << res;
}

void Menu::Subtract()
{
  Complex res = z1 - z2;
  std::cout << res;
}

void Menu::Multiply()
{
  Complex res = z1 * z2;
  std::cout << res;
}

void Menu::Divide()
{
  Complex res = z1 / z2;
  std::cout << res;
}

void Menu::Write()
{
  std::cout << z1;
  std::cout << z2;
}

void Menu::run()
{
  int v;
  do
  {
    Menuwrite();
    std::cin >> v;
    switch (v)
    {
      case 1: setValue(); break;
      case 2: Add(); break;
      case 3: Subtract(); break;
      case 4: Multiply(); break;
      case 5: Divide(); break;
      case 6: Write(); break;
    }
  }
  while (v != 0);
}

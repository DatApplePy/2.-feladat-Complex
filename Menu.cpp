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
  std::cout << "Kerem szokozzel elvalasztva adja meg a komplex szam valos es kepzetes szamat (Pl. 5 9)!" << std::endl;
  std::cout << "z1: "; std::cin >> x >> y;
  z1.setValue(x, y);
  std::cout << "z2: "; std::cin >> x >> y;
  z2.setValue(x, y);
  std::cout << std::endl;
}

void Menu::Add()
{
  Complex res = z1 + z2;
  std::cout << "z1 + z2 = " << res;
  std::cout << std::endl;
}

void Menu::Subtract()
{
  Complex res = z1 - z2;
  std::cout << "z1 - z2 = " << res;
  std::cout << std::endl;
}

void Menu::Multiply()
{
  Complex res = z1 * z2;
  std::cout << "z1 * z2 = " << res;
  std::cout << std::endl;
}

void Menu::Divide()
{
  Complex res = z1 / z2;
  std::cout << "z1 / z2 = " << res;
  std::cout << std::endl;
}

void Menu::Write()
{
  std::cout << "z1 = " << z1;
  std::cout << "z2 = " << z2;
  std::cout << std::endl;
}

void Menu::run()
{
  int v;
  do
  {
    Menuwrite();
    std::cin >> v;
    std::cout << std::endl;
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

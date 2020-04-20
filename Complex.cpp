#include <iostream>
#include <cmath>
#include "Complex.h"

void Complex::setValue(const float& x, const float& y)
{
  _real = x;
  _imag = y;
}

Complex Complex::operator+ (const Complex& z2) const
{
  return Complex(_real + z2._real , _imag + z2._imag);
}
Complex Complex::operator- (const Complex& z2) const
{
  return Complex (_real - z2._real , _imag - z2._imag);
}
Complex Complex::operator* (const Complex& z2) const
{
  float a = (_real * z2._real) - (_imag * z2._imag);
  float b = (_real * z2._imag) + (_imag * z2._real);
  return Complex(a , b);
}
Complex Complex::operator/ (const Complex& z2) const
{
  float a = ((_real * z2._real) + (_imag * z2._imag)) / (pow(z2._real, 2) + pow(z2._imag, 2));
  float b = ((_imag * z2._real) - (_real * z2._imag)) / (pow(z2._real, 2) + pow(z2._imag, 2));
  return Complex(a , b);
}
std::ostream& operator<<(std::ostream& o, const Complex& z)
{
  o << z._real << (z._imag < 0 ? "" : "+") << z._imag << "i" << std::endl;
  return o;
}

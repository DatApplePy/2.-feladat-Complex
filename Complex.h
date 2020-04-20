#pragma once
#include <iostream>
#include <cmath>

class Complex
{
private:
  float _real; //real number
  float _imag; //imaginary number

public:
  Complex(const float& x = 0.0, const float& y = 0.0): _real(x), _imag(y){}
  ~Complex(){}
  void setValue(const float& x,const float& y);
  Complex operator+ (const Complex& z2) const;
  Complex operator- (const Complex& z2) const;
  Complex operator* (const Complex& z2) const;
  Complex operator/ (const Complex& z2) const;
  friend std::ostream& operator<< (std::ostream& o, const Complex& z);
};

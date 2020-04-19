#pragma once
#include <iostream>
#include <cmath>

class Complex
{
private:
  float _real; //real number
  float _imag; //imaginary number

public:
  Complex(float, float);
  ~Complex(){}
  void setValue(float, float);
  Complex operator+ (const Complex&) const;
  Complex operator- (const Complex&) const;
  Complex operator* (const Complex&) const;
  Complex operator/ (const Complex&) const;
  friend std::ostream& operator<< (std::ostream&, Complex&);
};

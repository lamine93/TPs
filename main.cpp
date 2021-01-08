#include <iostream>
#include <string>
#include "point.hpp"


int main()
{
  //initialisation
  R3 p1(1., 2., 3.);
  std::cout << "p1 = " << p1 << std::endl;
  //copie
  R3 p2{p1};
  std::cout << "p2 = " << p2 << std::endl;
 //addition p1 + p2
  R3 p3 = p1 + p2;
  std::cout << "p1 + p2 = " << p3 << std::endl;
  std::cout << "p3 = " << p3 << std::endl;
  //multiplication par un scalaire
  R3 p4 = 5*p3;
  std::cout << "5*p3 = " << p4 << std::endl;


  return 0;
}

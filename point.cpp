#include <iostream>
#include <string>
#include "point.hpp"

//constructeur par défaut
R3::R3()
{
  v = new double[3];
  for (int i = 0; i<3; i++)
  {
    v[i] = 0;
  }
}
//constructeur
R3::R3(const double& x, const double& y, const double& z)
{
  v = new double[3];
  v[0] = x;
  v[1] = y;
  v[2] = z;
}

//constructeur par recopie
R3::R3(R3 const& p)
{
  v = new double[3];
  v[0] = p.v[0];
  v[1] = p.v[1];
  v[2] = p.v[2];
}
//destructeur
R3::~R3()
{
  delete[] v;
}
//surcharge de l'opérateur d'indexation []
double R3::operator[](int i)
{
  if ((i>=0) && (i<3)) return v[i];
  else
  {
    std::cerr << "problème avec l'index!" << std::endl;
    exit(1);
  }

}
//operateur d'affection
R3& R3::operator=(const R3& p)
{
  v[0] = p.v[0];
  v[1] = p.v[1];
  v[2] = p.v[2];

  return *this;
}
// surcharge de l'operateur + pour  la somme de deux vecteurs
R3  R3::operator+(const R3& p) const
{
  R3 p1;
  p1.v[0] = v[0] + p.v[0];
  p1.v[1] = v[1] + p.v[1];
  p1.v[2] = v[2] + p.v[2];

  return p1;
}
// multiplication par un scalaire
R3 operator*(const double& a, const R3& p)
{
  R3 p1;
  p1.v[0] = a * p.v[0];
  p1.v[1] = a * p.v[1];
  p1.v[2] = a * p.v[2];

  return p1;
}
// affichage des coordonnées du point
std::ostream &operator <<(std::ostream &os, const R3& p)
{
  os << "(" << " ";
  for(int i = 0; i < 3; i++){
          os << p.v[i] <<" ";
  }
  os << ")" << std::endl;
  return os;
}

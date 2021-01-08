#include <iostream>
#include <string>
using namespace std;


#if !defined(__POINT__)
#define __POINT__



class R3
{
  public:
    R3(); // cree le point (0,0,0)
    R3(const double& x, const double& y, const double& z); // cree le point de coordonnees (x,y,z)
    R3(R3 const& p); // constructeur par recopie
    //destructeur
    ~R3();
    //operateur d'affection
    R3& operator=(const R3& p);
    //accesseurs
    double operator[](int i); // accés a la valeur de la coordonnee i (par copie)
    //opérations arithmetique
    R3 operator+(const R3& p) const; // addition des coordonnees de deux points
    R3 operator-(const R3& p) const; // soustraction des coordonnees de deux points

    friend R3 operator*(const double& a, const R3& p); // déclaration d'amitié pour la fonction indépendante
    friend ostream& operator<<(ostream& os, const R3& p); // déclaration d'amitié pour la fonction indépendante



  private:
    double* v;

};

R3 operator*(const double& a, const R3& p); // multiplication par un scalaire
ostream& operator<<(ostream& os, const R3& p); // affichage des coordonnées du point


#endif

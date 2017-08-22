// -------------------------
// ignore estas dos líneas:
#ifndef GEOM
#define GEOM
// ------------------------

#include <iostream>

using namespace std;

class rectangulo {
  public:
   double x, y;
   double w, h;
};

class circulo {
  public:
   double r;
};


double garea(circulo c);

double garea(rectangulo r);



// -------------------------
// ignore esta línea:
#endif
// ------------------------

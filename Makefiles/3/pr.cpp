#include <iostream>
#include "complex.h"
#include "geom.h"
#include "vector.h"


using namespace std;

int main(void)
{
   vector x;
   vector y;
   complex c;
   
   x.x = 10;
   x.y = 20;
   x.z = 30;

   y.x = 30;
   y.y = 20;
   y.z = 10;

   c.real = 4;
   c.img = 2;
   
   for (int i = 0; i < 100; i ++)
   { 
      circulo cr;
      vector z = vsum(x, y);

      cr.r += x.z + c.real;

      c.real --;
      cout << i << " COMPLEJO: " << garea(cr) << endl;
      cprint(c);
      cout << endl;
   } 
  

   return 0;
}

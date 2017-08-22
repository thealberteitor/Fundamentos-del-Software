#include <cmath>
#include <iostream>
#include <cstdlib>
#include <msg.h>
#include <fmat.h>

using namespace std;

int main(void)
{
   double radio = 1;
   double area = 0;
   double y, x;

   unsigned long long iter = 0;

   double radio_cuadrado = fcuad(radio);
   
   while (1)
   {
      x = ( rand() / (float) (RAND_MAX) ) * radio;
      y = ( rand() / (float) (RAND_MAX) ) * radio;
      
      if (fsum(fcuad(x), fcuad(y)) <= radio_cuadrado)
	 area ++;

      iter ++;

      // 2 * PI * rc
      if (fmod(iter, 1000000) == 0)
      {
	 float PI = fdiv(fmul(area, 4), fmul(iter, radio_cuadrado));
	 
	 print("Iteración ");
	 cout << fdiv(iter, 1000000) << " millones: " << endl;
	 cout << " PI = " << PI << endl;
      }
   }
   
   return 0;
}

#include <iostream>
#include <cmath>
#include <complex.h>
#include <fmat.h>


using namespace std;

int main(void)
{
   // Creamos dos números complejos
   complex a, b;
   // Creamos una variable para el contador
   unsigned int c = 9;
   // Suma final:
   float suma = 0;
   
   
   // Mientras i sea mayor o igual que 0
   while (c >= 0)
   {
      
      // Asignamos los valores: a = c + 5 * i
      a.real = c;
      a.img = 5;

      // Asignamos los valores: b = 5 + (c-1) * i
      b.real = 5;
      b.img = c--; // aprovechamos para decrementar c

      // Se multiplican ambos tmp = a * b
      a = cmul(a, b);

      // se realiza la sumatoria de los módulos:
      suma += sqrt(fcuad(a.real) + fcuad(a.img));
   }

   // Mostramos por pantalla la suma final:
   cout << "La suma final de los módulos es: " << suma << endl;
   
   return 0;
}

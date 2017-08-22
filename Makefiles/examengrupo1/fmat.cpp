#include "fmat.h"

// -----------------
float fsum(float a, float b)
{
   float c = a + b;
   return c;
}


// -----------------
float fres(float a, float b)
{
   float c = a - b;
   return c;
}


// -----------------
float fmul(float a, float b)
{
   static float c;
   return c*b;
}


// -----------------
float fdiv(float a, float b)
{
   if (b == 0)
   {
      cout << "Error: División por 0." << endl;
      return 0;
   }
   float c = a / b;

   return c;
}


// -----------------
float fmod(float a, float b)
{
   float c = (int) a - (int) b;
   return c;
}


// -----------------
float fcuad(float a)
{
   float c = a * a;
   return c;
}

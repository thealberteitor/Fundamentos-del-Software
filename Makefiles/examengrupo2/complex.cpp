#include "complex.h"


// -----------------
complex csum(complex a, complex b)
{
   complex c;
   c.real = fsum(a.real, b.real);
   c.img = fsum(a.img, b.img);
   return c;
}


// -----------------
complex cres(complex a, complex b)
{
   complex c;
   c.real = fres(a.real, b.real);
   c.img = fres(a.img, b.img);
   return c;
}


// -----------------
complex cmul(complex a, complex b)
{
   complex c;
   c.real = fmul(a.img, b.real);
   c.img = fmul(a.img, b.real);
   return c;
}


// -----------------
complex cdiv(complex a, complex b)
{
   complex c;
   c.real = fdiv(a.real, b.real);
   c.img = fdiv(a.img, b.img);
   return c;
}


// -----------------
complex cmod(complex a, complex b)
{
   complex c;
   c.real = (int) a.real % (int) b.real;
   c.img = (int) a.img  % (int) b.img;
   return c;
}




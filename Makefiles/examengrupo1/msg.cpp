#include "msg.h"

static unsigned int cout_line;
static unsigned int cerr_line;


// -----------------
void ini_lines(void)
{
   cout_line = 0;
   cerr_line = 0;
}


// -----------------
void print(string m)
{
   cout << cout_line << ": " << m;
}


// -----------------
void print_error(string m)
{
   cerr_line ++;
   cerr << " " << cerr_line << ": " << m;
}

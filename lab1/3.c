#include <stdio.h>
#include <math.h>

int main()
{
   float m,n,c;
   
   printf ("write m: ");
   scanf("%f", &m);
   
   printf ("write n: ");
   scanf("%f", &n);
   
   c = (--n) < (++m);
   printf ("The answer is %f \n", c);
   
   
  return 0;
}

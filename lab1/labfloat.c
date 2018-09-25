#include <stdio.h>
#include <math.h>

      int main()
{
      float a,b,c;

      printf ("enter a:  \n");
      scanf  ("%f", &a);
      printf ("enter b:  \n");
      scanf  ("%f", &b);

      c = ( pow(a-b, 3) - ( pow (a, 3) - 3*a*pow(b,2)))/( pow (b,3) - 3*pow(a,2)*b);

      printf ( "Result: %f \n", c );

      return 0;
}

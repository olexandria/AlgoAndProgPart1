#include <stdio.h>
#include <math.h>

      int main()
{
      double a,b,c;

      printf ("enter a:  \n");
      scanf  ("%lf", &a);
      printf ("enter b:  \n");
      scanf  ("%lf", &b);

      c = ( pow(a-b, 3) - ( pow (a, 3) - 3*a*pow(b,2)))/( pow (b,3) - 3*pow(a,2)*b);

      printf ( "Result: %f \n", c );

      return 0;
}

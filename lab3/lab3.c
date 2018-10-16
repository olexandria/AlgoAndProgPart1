#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double factorial(int numb)
{
    double i = 1;
    for(int j =1; j <= numb;j ++)
    {
        i*= j;
    }
    return i;
}

int main()
{
    double factorial=1;
    float pi=3.14159265, e=2.71828;
    double Y=0;
    long double S;
    double SN=0;
    double SE=0;
    int n=0;

    for(double X=0.1;X<=1; X+=0.1)
    {
        Y=pow(e,X*cos( pi/4 ))*cos(X*sin(pi/4));
       
        for(n=0; n<25; n++)
        {
            S=(cos(n*(pi/4))/ factorial*pow( X, n));
            SN+=S;
        }

        n=0;
        S=0;

        do
        {
            S=(cos(n*pi/4)/ factorial*pow( X, n));
            SE+=S;
            n++;
        }
        while(S>0.0001);
        
        printf("X: %lf,   Y: %lf,    SN: %lf,    SE: %lf \n", X, Y,SN, SE);
        
    }
    return 0;
}

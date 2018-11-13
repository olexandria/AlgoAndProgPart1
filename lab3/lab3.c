#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long fact(int x)
{
    if(x == 0 || x == 1)
        {
            return 1;
        }
    else 
        {
            return x*fact(x-1);
        }
}


int main (void)
{

    float pi=3.14159265, e=2.71828;
    double Y=0;
    long double S=0;
    double X;
    double SN=0;
    double SE=0;
    int n;
    
    for(X=0.1; X<=1; X+=0.09)
    {
        Y=pow(e,(X*cos(pi/4)))*cos(X*sin(pi/4));
        
        for(n=0, SN=0; n<25;n++)
        {
            S=(cos(n*(pi/4))/fact(n)*pow(X,n));
            SN+=S;
        }
        n=0;
        SE=0;
        
        do
        {
            S=(cos(n*(pi/4))/fact(n)*pow(X,n));
            SE+=S;
            n++;
        }
        while(S > 0.0001);
        
        printf("X: %lf,   Y: %lf,    SE: %lf,    SN: %lf \n", X, Y, SE, SN);
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));
   int a[100];
   int count, a2[100],a3[100], b, n, i;
   do{
        printf("Put count elements of array: ");
        scanf("%d",&count);
    }while(count < 0 || count > 100);
   
   
   for (int i=0; i< count; i++)
   {
   a[i]=rand() % 10;
   printf (" | %d | \n  ", a[i]);
  
   }
   
   do
   {
   printf("Give me a number: ");
   scanf("%d", &n );
   } 
   while (n<0 || n> count-1);
   
   int k = 0;
   
   for (int i = 0; i < count - 1; i++)
   {
       if (i == n)
           k = 1;
   
       a2[i]=a[i + k];
       printf("| %d | \n   ", a2[i]);
   }
   
   b=0;
   for(i=0; i < count; i++) 
   {
      a3[i+b] = a2[i];
        if( b==0 )
        {
            if(a2[i] % 2 == 0 && i!=0) 
            {
                a3[i + 1] = a2[ i - 1 ] + 2;
                b = 1;
                
            }
        }
     printf(" %d ", a3[i]);
   }     
   
   
   
   return 0;
}

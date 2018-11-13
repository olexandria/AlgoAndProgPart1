#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main()
{
    int r,s;
    printf ("Enter r:");
    scanf("%d", &r);
    printf ("Enter s:");
    scanf("%d", &s);
  srand(time(NULL));
  int i,j,count = 0,count1 = 0;
  int arr[r][s];
  for ( i = 0; i < r; i++ ) 
{
    for ( j = 0; j < s; j++ )
      arr[i][j] = rand () %5;
}
 
  printf( "Our array:\n" );
  for ( i = 0; i < r; i++ ) 
{
    for ( j = 0; j < s; j++ )
    {
        printf( "%d ", arr[i][j] );
    }
    printf( "\n" );
}
    
    for( j=0; j<s; j++)// ryadku 
{
        int max = 0;
        for ( i = 0; i < r; i++ )
        {
            if(arr[j][max] < arr[j][i])// max v ryadky
            max=i;
            
        }
        
        int min = 0;
        for(int k=0; k<r; k++)
        {
        
            if(arr[min][max] > arr[k][max])// min v stovptsi(max)
            min=k;
        }
        if(min == j){
            count++;
        }
  
}
    for( j=0; j<s; j++)
{
        int max = 0;
        for ( i = 0; i < r; i++ )
        {
            if(arr[max][j] < arr[i][j])// max v stovptsi
            max=i;
            
        }
        
        int min = 0;
        for(int k=0; k<r; k++)
        {
        
            if(arr[max][min] > arr[max][k])// min v ryadky(max)
            min=k;
        }
        if(min == j){
            count1++;
        }
}
    printf("%d\n",count);
    printf("%d\n",count1);
    
return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int i;
    char text[255];
    
    printf("Enter the string:\n");
    fgets(text, 255, stdin);
    
    for(i=0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        printf("%c", text[i]);
        
        if(text[i] == ' ')
        printf("%c", ' ');
       
    }
    
    for(i=0; i < strlen(text); i++)
    {
        if(!isalpha(text[i]))
        printf("%c", text[i]);
    }
    
return 0;
}

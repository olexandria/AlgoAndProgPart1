#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

void write_file(FILE *F,int num)
{
    char temp[257];
    printf("Put %d strings to fill F1.txt:\n",num);    

    for(int i = 0; i < num; i++)
    {
        fgets(temp,255,stdin);
        if (temp[strlen(temp)-1]!='\n') 
        {
            temp[strlen(temp)]='\n';
            temp[strlen(temp)+1]='\0';
        }
        fputs(temp,F);
    }
    rewind(F);
}

void print_file(FILE *F)
{
    char temp[257];
    int count = 1;
    fgets(temp,256,F);
    do{
        printf("%d. %s",count++,temp);
        fgets(temp,256,F);        
    }while(!feof(F));
    
   rewind(F);
}

void copy_file(FILE *f1,FILE *f2,int N,int K)
{
    char temp[257];  
    int i = 0; 
    fgets(temp,256,f1);
    do{
        i++;
        if( i >= N && i <= K){
            fputs(temp,f2);
        }
        fgets(temp,256,f1);        
    }while(!feof(f1));
    rewind(f2);
    rewind(f1);
}

int is_loud(char c) 
{
  if(c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u' || c == 'y' || c == 'A' || c == 'O' || c == 'E' || c == 'I' || c == 'U' || c == 'Y')
        return 1;
    else 
        return 0;
}

int count_chars(FILE *f2)
{
    int counter = 0;
    char temp[257] = {};
    char el[257];
    while(1)
    {
        fgets(el,257,f2);
        if(feof(f2))break;
        strcat(temp,el);
    }
    
    for(int i = 0, n = strlen(temp); i < n; i++)
    {
            if(is_loud(temp[i])==0 && isalpha(temp[i]))
                    counter++;
    }
    return counter;
}

int main()
{
    FILE *f1,*f2;
    if ((f1=fopen("F1.txt", "w+"))==NULL || (f2=fopen("F2.txt", "w+"))==NULL)
    {
        printf("Error reading file!");
        exit(2);
    }

    write_file(f1,10);
    printf("F1.txt:\n");
    print_file(f1);
    printf("N = 4; K = 7\n");
    copy_file(f1,f2,4,7);
    printf("F2.txt:\n");
    print_file(f2);
    printf("Count of  words in F2.txt: %i\n", count_chars(f2));
    fclose(f1);
    fclose(f2);

    return 0;
}

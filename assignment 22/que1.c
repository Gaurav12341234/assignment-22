//1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* input();
int main()
{
    char *P;
    printf("Enter a string:");
    P=input();
    printf("The input string is:%s",P);
    return 0;
}
char* input()
{
    int i=0,j=1;
    char *str,c;
    str=(char*)malloc(sizeof(char));
    while(c!='\n')
    {
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        c=getc(stdin);
        str[i]=c;
        i++;
    }
    str[i]='\0';
    return str;
}
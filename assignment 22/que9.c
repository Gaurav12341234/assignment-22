//9. Write a program to allocate memory dynamically of the size in bytes entered by the
//   user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char n;
    printf("Entered the size in bytes:");
    scanf("%d",&n);
    int *p;
    p=(int*)malloc(n);
    if(p==NULL)
    {
        printf("Memory Allocation Failed:");
        return 0;
    }
    *p=5;
    printf("%d",*p);
    free(p);
    return 0;
}
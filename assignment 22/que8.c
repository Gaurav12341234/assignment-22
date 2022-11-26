//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    *p=5;
    printf("Before free DMA variable value is:%d",*p);
    free(p);
    printf("\nAfter free DMA variable value is:%d",*p);
    return 0;
}
//6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int *a,i,max;
    a=(int*)calloc(n,sizeof(int));
    if(a==NULL)
    {
        printf("Memory allocation failed:");
        return 0;
    }
    printf("Enter an array:");
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    printf("Print an array:");
    for(i=0;i<n;i++)
        printf("%d ",*(a+i));
    max=*a;
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("\nLargest element is: %d",max);
    free(a);
    return 0;
}
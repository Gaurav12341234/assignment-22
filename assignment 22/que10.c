//10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int *a,i,max,min;
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
    min=*a;
    for(i=1;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("\nMaximum element is: %d",max);
    printf("\nMinimum element is: %d",min);
    free(a);
    return 0;
}
//3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of data values:");
    scanf("%d",&n);
    int *a,sum=0;
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    printf("Enter an array:");
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    printf("Print an array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
    for(int i=0;i<n;i++)
        sum=sum+a[i];
    printf("\nSum of an array is :%d",sum);
    free(a);
    return 0;
}
//2. Write a program to ask the user to input a number of data values he would like to
//   enter then create an array dynamically to accommodate the data values. Now take
//   the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of data values:");
    scanf("%d",&n);
    int *a;
    float sum=0,avg;
    //a=(int*)calloc(n,sizeof(int));
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
    avg=sum/n;
    printf("\nAverage of array is %.2f:",avg);
    free(a);
    return 0;
}
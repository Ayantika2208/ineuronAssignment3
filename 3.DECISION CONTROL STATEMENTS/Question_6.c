/*Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    if(a != b)
    {
        if(a>b)
         printf("%d is greater than %d.",a,b);
        else
          printf("%d is greater than %d.",b,a);
    }
    else
      printf("Both have the same value : %d.",a);
    return 0;
}
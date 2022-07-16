//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num != 0)
    {
        if(num%7==0)
          printf("\nThe number is divisible by 7");
        else if(num%3==0)
          printf("The numbervis divisible by 3");
    }
    return 0;
}

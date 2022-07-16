//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num % 5 == 0)
    {
        printf("The number %d is divisible by 5");

    }
    else{
        printf("The number %d is  not divisible by 5");
    }
    return 0;
}

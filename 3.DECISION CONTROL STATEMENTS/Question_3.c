/*Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num % 2==0)
    
        printf("The number %d is an even number",num);
    
    else
        printf("The number %d is an odd number",num);
    return 0;
}

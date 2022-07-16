/*18. Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the month number(1 to 12):");
    scanf("%d",&n);
    if(n>=1 && n<=12)
    {
        if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
          printf("The month has 31 days");
        else if(n==2)
          printf("The month has 28 days");
        else
          printf("The month has 30 days");
    }
    else
        printf("Invaid input");
    return 0;
}
//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter a year:");
    scanf("%d",&yr);
    if(yr%4==0 && yr%100 != 0 || yr%400==0)//Year should a multiple of 4 or 400 but not a mutiple of 100.
       printf("Leap year");
    else  
        printf("Not a leap year");
    return 0;

}
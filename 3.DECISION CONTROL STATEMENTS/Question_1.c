//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    //method 1
    if(num > 0)
    {
        printf("The number %d is positive ",num);

    }
    else{
        printf("The number %d is non-positive",num);
    }
    //method 2
    /*if(num > 0)
    {
        printf("The number %d is positive ",num);
    }
    if(num < 0)
    {
       printf("The number %d is non-positive",num); 
    }*/
    return 0;
    

}

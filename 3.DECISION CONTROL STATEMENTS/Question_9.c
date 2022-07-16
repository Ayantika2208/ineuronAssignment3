/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b&&b!=c&&c!=a)
    {
        if(a>b&&a>c)
          printf("%d is greatest.",a);
        else if(b>a&&b>c)
          printf("%d is greatest.",b);
        else
           printf("%d is greatest.",c);
    }
    else if(a==b||b==c||c==a)
    {
        if(a==b&&a>c)
          printf("%d is greatest.",a);
        else if(b==c&&b>c)
          printf("%d is greatest.",b);
        else
           printf("%d is the greatest.",c);

    }
    else{
        printf("%d is the greatest number.",a);
    }
    return 0;
}


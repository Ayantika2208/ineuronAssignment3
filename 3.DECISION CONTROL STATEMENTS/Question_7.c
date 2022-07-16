/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
   int a,b,c,D;
   printf("To check the roots of a given quadratic equation ,");
   printf("\nEnter the integers a,b,c :");
   scanf("%d %d %d",&a,&b,&c);
   D=(b*b-(4*a*c));
   if(D > 0)
      printf("The roots are real and unequal");
   else if(D < 0)
      printf("The roots are imaginary");
   else
      printf("The roots are equal and distinct");
   return 0;

   
}
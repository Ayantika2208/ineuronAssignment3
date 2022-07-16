/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
      printf("The given character is an alphabet in uppercase");
    else if(ch>=97 && ch<=122)
      printf("The given character is an aplhabet in lowercase");
    else if(ch>=48 && ch<=57)
      printf("The given character is a digit.");
    else
      printf("The given character is a special chaarcter");
    return 0;
}

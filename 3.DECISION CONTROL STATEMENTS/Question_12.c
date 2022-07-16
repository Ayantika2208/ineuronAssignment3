//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet:");
    scanf("%c",&alphabet);
    if(alphabet>=65&& alphabet<=90)
    {
        printf("The aplhabet is in upper case");
    }
    else{
        printf("The alphabet is in lower case");
    }
    return 0;
}

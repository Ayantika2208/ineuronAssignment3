/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    int maths,eng,science,bengali,computer;
    printf("Enter the marks of 5 subjects(out of 100):");
    scanf("%d %d %d %d %d",&maths,&eng,&science,&bengali,&computer);
    if(maths>=33 && science>=33 && eng>=33 && bengali>=33 && computer>=33)
     printf("Passed the examination.");
    else
     printf("Failed the examination.");
    return 0;

}
